@class NSString, NSArray;

@interface BDUGLuckyCatUpdateGeckoInfoXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *accesskey;
@property (copy, nonatomic) NSArray *channels;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
