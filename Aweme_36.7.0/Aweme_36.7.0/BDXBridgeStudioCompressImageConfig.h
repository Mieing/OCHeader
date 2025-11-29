@class NSNumber;

@interface BDXBridgeStudioCompressImageConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *keepRatio;
@property (retain, nonatomic) NSNumber *quality;
@property (retain, nonatomic) NSNumber *targetHeight;
@property (retain, nonatomic) NSNumber *targetWidth;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
