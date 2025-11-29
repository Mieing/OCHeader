@class NSString;

@interface AWEFCoinBridgeTokenShareMethodParamsModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *shareTemplate;
@property (nonatomic) int channelType;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
