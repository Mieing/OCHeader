@class NSDictionary, NSMutableDictionary;

@interface AWESearchScanEntranceIntentManager : NSObject

@property (copy, nonatomic) NSDictionary *settingData;
@property (retain, nonatomic) NSMutableDictionary *intentDictionary;

+ (id)sharedInstance;

- (id)fetchIntentDataWithModel:(id)a0 andConfig:(id)a1;
- (void)setupSettingData;
- (void)setupIntentDictionary;
- (void).cxx_destruct;

@end
