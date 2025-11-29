@class NSString;

@interface MMFinderLiveStickerRecordAttributesBase : NSObject

@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned long long stickerType;
@property (nonatomic) double canvasSizeWidth;
@property (nonatomic) double canvasSizeHeight;
@property (nonatomic) double nativeSizeWidth;
@property (nonatomic) double nativeSizeHeight;
@property (nonatomic) double transformA;
@property (nonatomic) double transformB;
@property (nonatomic) double transformC;
@property (nonatomic) double transformD;
@property (nonatomic) double transformTx;
@property (nonatomic) double transformTy;
@property (nonatomic) double normalizedSizeWidth;
@property (nonatomic) double normalizedSizeHeight;
@property (nonatomic) double normalizedCenterX;
@property (nonatomic) double normalizedCenterY;
@property (nonatomic) double normalizedAnchorPointX;
@property (nonatomic) double normalizedAnchorPointY;
@property (nonatomic) double normalizedTransformComponentsScaleWidth;
@property (nonatomic) double normalizedTransformComponentsScaleHeight;
@property (nonatomic) double normalizedTransformComponentsHorizontalShear;
@property (nonatomic) double normalizedTransformComponentsRotation;
@property (nonatomic) double normalizedTransformComponentsTranslationX;
@property (nonatomic) double normalizedTransformComponentsTranslationY;
@property (nonatomic) long long actionSceneOrientation;

+ (id)stickerRecordAttributesFromItem:(id)a0;

- (id)initWithStickerItem:(id)a0;
- (void)populateStickerItem:(id)a0;
- (id)stickerItemFromRecordAttributes;
- (void).cxx_destruct;

@end
