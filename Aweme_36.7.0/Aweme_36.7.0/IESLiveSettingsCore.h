@class NSDictionary;
@protocol IESLiveSettings;

@interface IESLiveSettingsCore : NSObject

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (retain, nonatomic) NSDictionary *settingConfig;

+ (id)sharedManager;

- (id)loadSettingsConfig;
- (id)valueForKey:(id)a0 defaultValue:(id)a1 freeze:(BOOL)a2 type:(int)a3 title:(id)a4 description:(id)a5 RDauthor:(id)a6 PMs:(id)a7 liveVersion:(id)a8 businessModule:(id)a9;
- (id)valueForKey:(id)a0 valueType:(int)a1;
- (id)valueForKey:(id)a0 valueType:(int)a1 defaultValue:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)configPath;

@end
