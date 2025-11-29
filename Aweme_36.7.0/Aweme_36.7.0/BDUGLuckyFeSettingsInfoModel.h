@class NSDictionary, NSArray;

@interface BDUGLuckyFeSettingsInfoModel : NSObject

@property (copy, nonatomic) NSDictionary *dogSettings;
@property (copy, nonatomic) NSDictionary *staticSettings;
@property (copy, nonatomic) NSDictionary *personalSettings;
@property (copy, nonatomic) NSDictionary *pollingSettings;
@property (copy, nonatomic) NSArray *staticSettingsKeysMissing;
@property (copy, nonatomic) NSArray *staticSettingsDecodedKeysMissing;
@property (copy, nonatomic) NSArray *personalSettingsKeysMissing;
@property (copy, nonatomic) NSArray *personalSettingsDecodedKeysMissing;
@property (copy, nonatomic) NSArray *pollingSettingsKeysMissing;
@property (copy, nonatomic) NSArray *pollingSettingsDecodedKeysMissing;

- (void).cxx_destruct;

@end
