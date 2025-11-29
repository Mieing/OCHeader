@class NSString, NSNumber;

@interface BDXBridgeLifeGetAssetTempPathResource : BDXBridgeModel

@property (copy, nonatomic) NSString *localId;
@property (retain, nonatomic) NSNumber *fileType;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
