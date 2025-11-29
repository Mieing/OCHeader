@class NSString;

@interface ACCTCECropUtils : NSObject <ACCTCECropUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasCropDiffBetween:(id)a0 andAnotherProject:(id)a1;
+ (BOOL)needUploadFramesWithProject:(id)a0;
+ (BOOL)hasCropInfoWithSlot:(id)a0;
+ (BOOL)hasRotateInfoWithSlot:(id)a0;
+ (id)cropPointsWithSlot:(id)a0;
+ (BOOL)enableMergeWithCroppedSizeWithPublishModel:(id)a0;
+ (BOOL)hasScaledByUserWithPublishModel:(id)a0;
+ (BOOL)hasEditedAtCropPageWithProject:(id)a0;
+ (BOOL)isVideoOrImageResourceWithPublishModel:(id)a0;
+ (double)aspectRatioFromCropPoints:(id)a0 resourceSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })resourceSizeWithSlot:(id)a0 nle:(id)a1;
+ (void)updateCropWithSlot:(id)a0 cropRatioType:(long long)a1 cropRatioValue:(double)a2 cropPoints:(id)a3;
+ (double)rotationWithProject:(id)a0;
+ (BOOL)hasEditedAtCropPageWithSlot:(id)a0;
+ (BOOL)hasCroppedWithProject:(id)a0;
+ (BOOL)hasFlipInfoWithSlot:(id)a0;
+ (id)cropPointInfoWithSlot:(id)a0;
+ (double)maxCropHeight;
+ (BOOL)isSameRatioWithSlot1:(id)a0 slot2:(id)a1;
+ (BOOL)isSameCropWithSlot1:(id)a0 slot2:(id)a1;
+ (id)cropIdentifierWithProject:(id)a0;
+ (id)fetchCroppedImageWithProject:(id)a0;
+ (void)updateToSlotScale:(id)a0 toSlotCanvasSize:(struct CGSize { double x0; double x1; })a1 fromSlot:(id)a2;
+ (id)adjustPointsToCorrectPosition:(id)a0;
+ (double)maxCropWidth;
+ (id)mainSlotWithPublishModel:(id)a0;
+ (BOOL)isDefaultPoints:(id)a0;
+ (id)cropResourceWithDstSlot:(id)a0 srcSlot:(id)a1 nle:(id)a2 project:(id)a3;
+ (BOOL)isSameCropWithPoints1:(id)a0 points2:(id)a1;
+ (BOOL)checkCropPointsEqual:(id)a0 cropPoints2:(id)a1;
+ (id)_cropImage:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 flipped:(BOOL)a3;
+ (id)cropResourceWithDstSlot:(id)a0 srcSlot:(id)a1 nle:(id)a2;
+ (struct CGSize { double x0; double x1; })resourceSizeWithPublishModel:(id)a0;
+ (id)cropPreviewBackgroundColor;
+ (BOOL)hasCroppedWithCropPointInfo:(id)a0;
+ (void)resetCropRelatedInfoWithSlot:(id)a0;
+ (void)copyCropRelatedInfoFromPublishModel:(id)a0 toPublishModel:(id)a1;


@end
