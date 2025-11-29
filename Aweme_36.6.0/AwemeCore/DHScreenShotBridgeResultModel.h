@class NSString;

@interface DHScreenShotBridgeResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long statusCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
