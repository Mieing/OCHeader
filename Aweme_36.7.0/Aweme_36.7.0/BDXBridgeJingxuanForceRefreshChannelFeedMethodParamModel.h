@class NSString, NSDictionary;

@interface BDXBridgeJingxuanForceRefreshChannelFeedMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *pullType;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
