@interface AWESearchTabUtil : NSObject

+ (id)tabNameForTab:(id)a0;
+ (long long)feedTypeForTab:(id)a0;
+ (id)tabForTabType:(unsigned long long)a0;
+ (unsigned long long)tabTypeOfTab:(id)a0;
+ (id)updateSearchTabModels:(id)a0;
+ (long long)indexOfTab:(id)a0 tabModels:(id)a1;
+ (id)tabAtIndex:(long long)a0 tabModels:(id)a1;
+ (id)tabTypeToTabfeedTypeMap;
+ (id)settingsSearchTabModels;
+ (id)tabNameForSearchTabConfig:(id)a0;
+ (id)getClassNameForTab:(id)a0;
+ (BOOL)checkTabModelsRepeatIsVaild:(id)a0;
+ (unsigned long long)tabTypeForTabfeedType:(long long)a0;
+ (unsigned long long)tabTypeAtIndex:(long long)a0 tabModels:(id)a1;
+ (long long)indexOfTabType:(unsigned long long)a0 selectedIndex:(long long)a1 tabModels:(id)a2;
+ (id)settingsSearchDynamicTabModels;
+ (id)defaultSearchTabModels;
+ (id)getTabModelWithTabType:(id)a0;
+ (id)tabModelsAfterRemovingModelWithTab:(id)a0 inSearchTabModels:(id)a1;
+ (id)tabModelsAfterRemovingModelWithArr:(id)a0 inSearchTabModels:(id)a1;

@end
