@class NSString, NSNumber;

@interface BDUGLuckyCatPreloadAppMarketXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appStoreID;
@property (retain, nonatomic) NSNumber *downloadScene;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
