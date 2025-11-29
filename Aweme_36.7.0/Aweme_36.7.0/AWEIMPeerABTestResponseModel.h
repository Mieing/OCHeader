@class NSDictionary;

@interface AWEIMPeerABTestResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *expResult;
@property (nonatomic) BOOL ignore;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
