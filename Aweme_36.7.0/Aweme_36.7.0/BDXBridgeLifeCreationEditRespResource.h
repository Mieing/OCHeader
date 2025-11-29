@class NSNumber, NSString;

@interface BDXBridgeLifeCreationEditRespResource : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fileType;
@property (retain, nonatomic) NSNumber *isLocal;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
