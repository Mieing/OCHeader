@class NSMutableDictionary;

@interface QBPreferencesManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *preferencesDic;

+ (id)shareInstance;

- (id)init;
- (void)loadFromLocalFile;
- (void)resetPreferencesDic:(id)a0;
- (void)saveTimeStamp:(long long)a0 contentMd5:(id)a1;
- (BOOL)isPreferenceSwitcherOn:(id)a0 nilIsOn:(BOOL)a1;
- (long long)intValueForPreference:(id)a0 defaultValue:(long long)a1;
- (id)stringValueForPreference:(id)a0 defaultValue:(id)a1;
- (id)getPreferencesContentMd5;
- (void).cxx_destruct;

@end
