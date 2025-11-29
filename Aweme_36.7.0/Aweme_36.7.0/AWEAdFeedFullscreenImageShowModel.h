@class NSString, NSDictionary;

@interface AWEAdFeedFullscreenImageShowModel : BDXBridgeModel

@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *showRefer;
@property (copy, nonatomic) NSDictionary *adExtraData;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
