﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesisanalyticsv2/model/ApplicationConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationConfigurationUpdate::ApplicationConfigurationUpdate() : 
    m_sqlApplicationConfigurationUpdateHasBeenSet(false),
    m_applicationCodeConfigurationUpdateHasBeenSet(false),
    m_flinkApplicationConfigurationUpdateHasBeenSet(false),
    m_environmentPropertyUpdatesHasBeenSet(false),
    m_applicationSnapshotConfigurationUpdateHasBeenSet(false)
{
}

ApplicationConfigurationUpdate::ApplicationConfigurationUpdate(JsonView jsonValue) : 
    m_sqlApplicationConfigurationUpdateHasBeenSet(false),
    m_applicationCodeConfigurationUpdateHasBeenSet(false),
    m_flinkApplicationConfigurationUpdateHasBeenSet(false),
    m_environmentPropertyUpdatesHasBeenSet(false),
    m_applicationSnapshotConfigurationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationConfigurationUpdate& ApplicationConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SqlApplicationConfigurationUpdate"))
  {
    m_sqlApplicationConfigurationUpdate = jsonValue.GetObject("SqlApplicationConfigurationUpdate");

    m_sqlApplicationConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCodeConfigurationUpdate"))
  {
    m_applicationCodeConfigurationUpdate = jsonValue.GetObject("ApplicationCodeConfigurationUpdate");

    m_applicationCodeConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlinkApplicationConfigurationUpdate"))
  {
    m_flinkApplicationConfigurationUpdate = jsonValue.GetObject("FlinkApplicationConfigurationUpdate");

    m_flinkApplicationConfigurationUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentPropertyUpdates"))
  {
    m_environmentPropertyUpdates = jsonValue.GetObject("EnvironmentPropertyUpdates");

    m_environmentPropertyUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSnapshotConfigurationUpdate"))
  {
    m_applicationSnapshotConfigurationUpdate = jsonValue.GetObject("ApplicationSnapshotConfigurationUpdate");

    m_applicationSnapshotConfigurationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_sqlApplicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("SqlApplicationConfigurationUpdate", m_sqlApplicationConfigurationUpdate.Jsonize());

  }

  if(m_applicationCodeConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ApplicationCodeConfigurationUpdate", m_applicationCodeConfigurationUpdate.Jsonize());

  }

  if(m_flinkApplicationConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("FlinkApplicationConfigurationUpdate", m_flinkApplicationConfigurationUpdate.Jsonize());

  }

  if(m_environmentPropertyUpdatesHasBeenSet)
  {
   payload.WithObject("EnvironmentPropertyUpdates", m_environmentPropertyUpdates.Jsonize());

  }

  if(m_applicationSnapshotConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ApplicationSnapshotConfigurationUpdate", m_applicationSnapshotConfigurationUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws