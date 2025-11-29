@class NSString, NSNumber;

@interface BDXBridgeLifeGetCreationInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *autoASR;
@property (copy, nonatomic) NSString *customVideoURI;
@property (copy, nonatomic) NSString *defaultVideoURI;
@property (retain, nonatomic) NSNumber *isImageAlbumStyle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
