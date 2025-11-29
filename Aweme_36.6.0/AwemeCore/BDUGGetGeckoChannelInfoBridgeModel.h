@class NSString, NSArray;

@interface BDUGGetGeckoChannelInfoBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channels;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
