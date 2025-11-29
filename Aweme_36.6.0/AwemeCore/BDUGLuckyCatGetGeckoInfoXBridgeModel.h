@class NSString, NSArray;

@interface BDUGLuckyCatGetGeckoInfoXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *accesskey;
@property (copy, nonatomic) NSArray *channels;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
