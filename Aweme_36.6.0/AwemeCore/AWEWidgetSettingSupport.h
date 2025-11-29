@class NSLock;

@interface AWEWidgetSettingSupport : NSObject

@property (retain, nonatomic) NSLock *settingLock;

+ (id)getCommonDictionary;
+ (void)setCommonDictionaryWithValue:(id)a0 forKey:(id)a1;
+ (void)setUserDefaultWithValue:(id)a0 forKey:(id)a1;
+ (id)getWidgetLogArray;
+ (void)clearWidgetLogArray;
+ (id)getWidgetLogArrayWithMemory;
+ (void)clearWidgetLogArrayWithMemory;
+ (void)widgetLogReport;
+ (void)widgetLogReportWithMemory;
+ (void)updateWidgetSettings;
+ (id)sharedInstance;

- (void)setWidgetSettingWithValue:(id)a0 forKey:(id)a1;
- (id)getWidgetSettingsDictionary;
- (void)removeWidgetSettingWithKey:(id)a0;
- (void).cxx_destruct;

@end
