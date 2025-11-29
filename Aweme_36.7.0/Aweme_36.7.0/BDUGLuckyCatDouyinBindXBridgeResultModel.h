@class NSString;

@interface BDUGLuckyCatDouyinBindXBridgeResultModel : BDXBridgeModel

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) long long errorCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
