@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenSearchVideoForFullPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSNumber *awemeIndex;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
