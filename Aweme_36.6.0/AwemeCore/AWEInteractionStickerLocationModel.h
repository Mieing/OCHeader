@class NSDecimalNumber, AWEInteractionStickerLocationBackUpModel, NSString;

@interface AWEInteractionStickerLocationModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSDecimalNumber *x;
@property (retain, nonatomic) NSDecimalNumber *y;
@property (retain, nonatomic) NSDecimalNumber *stableX;
@property (retain, nonatomic) NSDecimalNumber *stableY;
@property (retain, nonatomic) AWEInteractionStickerLocationBackUpModel *backUp;
@property (retain, nonatomic) NSDecimalNumber *width;
@property (retain, nonatomic) NSDecimalNumber *height;
@property (retain, nonatomic) NSDecimalNumber *rotation;
@property (retain, nonatomic) NSDecimalNumber *scale;
@property (retain, nonatomic) NSDecimalNumber *pts;
@property (retain, nonatomic) NSDecimalNumber *startTime;
@property (retain, nonatomic) NSDecimalNumber *endTime;
@property (retain, nonatomic) NSDecimalNumber *globalWidth;
@property (retain, nonatomic) NSDecimalNumber *globalHeight;
@property (retain, nonatomic) NSDecimalNumber *globalContainerWidth;
@property (retain, nonatomic) NSDecimalNumber *globalContainerHeight;
@property (retain, nonatomic) NSDecimalNumber *xRatio;
@property (retain, nonatomic) NSDecimalNumber *yRatio;
@property (nonatomic) BOOL isRatioCoord;
@property (nonatomic) BOOL isGlobalLocation;
@property (copy, nonatomic) NSString *frameInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformerForDecimalNumber;
+ (id)xForRecoverJSONTransformer;
+ (id)yForRecoverJSONTransformer;
+ (id)widthForRecoverJSONTransformer;
+ (id)heightForRecoverJSONTransformer;
+ (id)stableXJSONTransformer;
+ (id)backUpJSONTransformer;
+ (id)stableYJSONTransformer;
+ (id)xJSONTransformer;
+ (id)yJSONTransformer;
+ (id)globalWidthJSONTransformer;
+ (id)globalHeightJSONTransformer;
+ (id)globalContainerWidthJSONTransformer;
+ (id)globalContainerHeightJSONTransformer;
+ (id)widthJSONTransformer;
+ (id)heightJSONTransformer;
+ (id)rotationJSONTransformer;
+ (id)scaleJSONTransformer;
+ (id)ptsJSONTransformer;
+ (id)xRatioJSONTransformer;
+ (id)yRatioJSONTransformer;
+ (id)convertCGFloatToNSDecimalNumber:(double)a0;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)startTimeJSONTransformer;
+ (id)endTimeJSONTransformer;

- (id)initWithGeometryModel:(id)a0 andTimeRangeModel:(id)a1;
- (id)geometryModel;
- (id)timeRangeModel;
- (id)validNumber:(id)a0;
- (id)ratioGeometryModel;
- (id)initWithLocationInfo:(id)a0;
- (id)absoluteGeometryModel;
- (id)ratioGeometryModelForGlobal;
- (id)locationInfo;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
