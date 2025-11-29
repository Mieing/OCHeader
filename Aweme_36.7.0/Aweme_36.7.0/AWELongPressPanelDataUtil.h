@interface AWELongPressPanelDataUtil : NSObject

+ (long long)getConfigTypeWithAwemeModel:(id)a0;
+ (id)getDefaultBuildContextsForModern;
+ (id)getDefaultBuildContextsForConfigJX;
+ (id)generatePanelModuleModelWithContext:(id)a0;
+ (id)getbuildContextsWithConfigType:(long long)a0;
+ (id)generatePanelConfigModelWithContexts:(id)a0 configType:(long long)a1;
+ (id)generateModuleItemModelWithContext:(id)a0;
+ (id)getDefaultPanelConfigWithConfigType:(long long)a0;
+ (id)panelConfigIdentifierMap;
+ (id)panelConfigGroupTypeMap;

@end
