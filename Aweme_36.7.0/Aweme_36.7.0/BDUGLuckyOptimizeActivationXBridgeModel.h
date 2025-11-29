@class NSString;

@interface BDUGLuckyOptimizeActivationXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long optimizeType;
@property (copy, nonatomic) NSString *patternToken;
@property (copy, nonatomic) NSString *toAid;
@property (copy, nonatomic) NSString *installState;
@property (copy, nonatomic) NSString *writeClipboardToast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
