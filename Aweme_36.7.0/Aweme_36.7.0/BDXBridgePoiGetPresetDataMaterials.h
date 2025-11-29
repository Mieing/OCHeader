@class NSString, NSNumber;

@interface BDXBridgePoiGetPresetDataMaterials : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *videoCoverURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
