@class NSString, NSDictionary;

@interface BDECIMClientCommonConfigManager : NSObject

@property (copy, nonatomic) NSString *pigeonShopId;
@property (copy) NSDictionary *imClientDict;

+ (id)shared;

- (id)getIMClientWithCustomBizID:(id)a0;
- (id)generateNotificationKeyWithKey:(id)a0 customBizID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
