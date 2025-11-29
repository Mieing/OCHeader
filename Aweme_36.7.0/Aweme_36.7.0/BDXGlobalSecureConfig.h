@class NSDictionary;

@interface BDXGlobalSecureConfig : NSObject

@property (copy, nonatomic) NSDictionary *globalConfigMap;

+ (id)shareInstance;

- (void)updateDefaultGlobalConfig:(id)a0 bid:(id)a1;
- (id)globalConfigWithBid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_defaultKey;

@end
