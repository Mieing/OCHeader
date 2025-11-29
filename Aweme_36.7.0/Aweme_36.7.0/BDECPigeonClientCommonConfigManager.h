@class NSString, NSDictionary;

@interface BDECPigeonClientCommonConfigManager : NSObject

@property (copy, nonatomic) NSString *requestHost;
@property (copy, nonatomic) id /* block */ requestCommonParamsBlock;
@property (copy) NSDictionary *pigeonClientDict;
@property (copy) NSDictionary *pigeonConfigDict;

+ (id)shared;

- (id)getPigeonClientWithCustomBizID:(id)a0;
- (id)getPigeonClientConfigWithCustomBizID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
