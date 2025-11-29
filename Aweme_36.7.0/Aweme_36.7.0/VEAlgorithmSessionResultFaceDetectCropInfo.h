@class UIImage;

@interface VEAlgorithmSessionResultFaceDetectCropInfo : NSObject

@property (retain, nonatomic) UIImage *smashCropImage;
@property (retain, nonatomic) UIImage *bingoCropImage;
@property (retain, nonatomic) UIImage *slowPathCropImage;
@property (nonatomic) float gender;
@property (nonatomic) int skinTone;

- (void).cxx_destruct;

@end
