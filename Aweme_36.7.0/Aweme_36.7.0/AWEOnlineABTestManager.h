@class NSDictionary;

@interface AWEOnlineABTestManager : NSObject

@property (readonly, nonatomic) NSDictionary *abTestData;

+ (id)sharedManager;

- (id)onlineDataWithABTestInfoModel:(id)a0;
- (id)onlineDataWithPropertyName:(id)a0;
- (id)init;

@end
