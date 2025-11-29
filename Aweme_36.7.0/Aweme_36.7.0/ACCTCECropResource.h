@class ACCTCECropPointInfo, AVAsset, UIImage, NLETrackSlot_OC, ACCTCECropRatioOptions;

@interface ACCTCECropResource : NSObject

@property (nonatomic) BOOL hasEdited;
@property (readonly, nonatomic) long long resourceType;
@property (readonly, nonatomic) AVAsset *video;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) ACCTCECropRatioOptions *cropRatioOptions;
@property (retain, nonatomic) ACCTCECropPointInfo *cropPointInfo;
@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;
@property (nonatomic) BOOL hasFlipped;
@property (nonatomic) double rotationAngle;
@property (readonly, nonatomic) unsigned long long livePhotoMode;

- (void)resetCropPointInfoToBack;
- (id)initWithSlot:(id)a0 cropPointInfo:(id)a1 resourceType:(long long)a2 image:(id)a3 video:(id)a4 livePhotoMode:(unsigned long long)a5 selectedRatioOption:(id)a6 cropRatioOptionDatas:(id)a7 disableCropRatioOptionDatas:(id)a8;
- (struct CGSize { double x0; double x1; })resourceShowSizeWithMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize { double x0; double x1; })resourceSize;

@end
