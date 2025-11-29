@class NSString;

@interface BDUGLuckyScreenShotXBridgeResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *cacheMessage;
@property (nonatomic) long long cacheStatusCode;
@property (copy, nonatomic) NSString *absolutePath;
@property (copy, nonatomic) NSString *relativePath;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
