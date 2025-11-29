@class NSArray, NSDictionary;

@interface AWEUGWidgetSupporter : NSObject

@property (copy, nonatomic) NSArray *lastInstalledList;
@property (copy, nonatomic) NSDictionary *appStatusDetailDict;
@property (copy, nonatomic) NSDictionary *lastShortcutInstalledList;
@property (copy, nonatomic) NSDictionary *widgetTypeToKindMap;
@property (copy, nonatomic) NSDictionary *theNewWidgetTypeToKindMap;

+ (id)widgetKindToTypeMap;
+ (id)widgetSizeMap;
+ (id)widgetNameSuffixMap;
+ (id)theNewWidgetKindToTypeMap;
+ (id)sharedInstance;

- (id)widgetKindFromWidgetType:(id)a0;
- (id)widgetTypeFromWidgetKind:(id)a0;
- (id)processWidgetModelWithString:(id)a0;
- (id)processShortcutInfoWithDictionary:(id)a0;
- (id)changeShortcutGdLabelToInstallName:(id)a0;
- (id)processAppStatusModelWithInstalledArray:(id)a0;
- (BOOL)isSameReportDayWithCurrentDay:(id)a0;
- (void)p_trackInstallationChangeOfWidget:(id)a0 isInstallation:(BOOL)a1;
- (void)fullyReportWidgetInstallationStatusIfNeeded:(id)a0;
- (void)reportWidgetsInstallationChangeIfNeeded:(id)a0;
- (void)reportWidgetsInstallationInfo;
- (void).cxx_destruct;

@end
