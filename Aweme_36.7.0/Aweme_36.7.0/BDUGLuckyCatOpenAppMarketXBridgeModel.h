@class NSString, NSNumber;

@interface BDUGLuckyCatOpenAppMarketXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *pkgName;
@property (copy, nonatomic) NSString *appStoreID;
@property (retain, nonatomic) NSNumber *downloadScene;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
