
/* Generated data (by glib-mkenums) */

#include "goabackendenums.h"
#include "goabackendenumtypes.h"
/* enumerations from "goabackendenums.h" */
GType
goa_provider_group_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { GOA_PROVIDER_GROUP_BRANDED, "GOA_PROVIDER_GROUP_BRANDED", "branded" },
        { GOA_PROVIDER_GROUP_CONTACTS, "GOA_PROVIDER_GROUP_CONTACTS", "contacts" },
        { GOA_PROVIDER_GROUP_MAIL, "GOA_PROVIDER_GROUP_MAIL", "mail" },
        { GOA_PROVIDER_GROUP_TICKETING, "GOA_PROVIDER_GROUP_TICKETING", "ticketing" },
        { GOA_PROVIDER_GROUP_CHAT, "GOA_PROVIDER_GROUP_CHAT", "chat" },
        { GOA_PROVIDER_GROUP_INVALID, "GOA_PROVIDER_GROUP_INVALID", "invalid" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GoaProviderGroup"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
goa_provider_features_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { GOA_PROVIDER_FEATURE_BRANDED, "GOA_PROVIDER_FEATURE_BRANDED", "branded" },
        { GOA_PROVIDER_FEATURE_MAIL, "GOA_PROVIDER_FEATURE_MAIL", "mail" },
        { GOA_PROVIDER_FEATURE_CALENDAR, "GOA_PROVIDER_FEATURE_CALENDAR", "calendar" },
        { GOA_PROVIDER_FEATURE_CONTACTS, "GOA_PROVIDER_FEATURE_CONTACTS", "contacts" },
        { GOA_PROVIDER_FEATURE_CHAT, "GOA_PROVIDER_FEATURE_CHAT", "chat" },
        { GOA_PROVIDER_FEATURE_DOCUMENTS, "GOA_PROVIDER_FEATURE_DOCUMENTS", "documents" },
        { GOA_PROVIDER_FEATURE_PHOTOS, "GOA_PROVIDER_FEATURE_PHOTOS", "photos" },
        { GOA_PROVIDER_FEATURE_FILES, "GOA_PROVIDER_FEATURE_FILES", "files" },
        { GOA_PROVIDER_FEATURE_TICKETING, "GOA_PROVIDER_FEATURE_TICKETING", "ticketing" },
        { GOA_PROVIDER_FEATURE_READ_LATER, "GOA_PROVIDER_FEATURE_READ_LATER", "read-later" },
        { GOA_PROVIDER_FEATURE_PRINTERS, "GOA_PROVIDER_FEATURE_PRINTERS", "printers" },
        { GOA_PROVIDER_FEATURE_MAPS, "GOA_PROVIDER_FEATURE_MAPS", "maps" },
        { GOA_PROVIDER_FEATURE_MUSIC, "GOA_PROVIDER_FEATURE_MUSIC", "music" },
        { GOA_PROVIDER_FEATURE_TODO, "GOA_PROVIDER_FEATURE_TODO", "todo" },
        { GOA_PROVIDER_FEATURE_INVALID, "GOA_PROVIDER_FEATURE_INVALID", "invalid" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_flags_register_static (g_intern_static_string ("GoaProviderFeatures"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}

/* Generated data ends here */

