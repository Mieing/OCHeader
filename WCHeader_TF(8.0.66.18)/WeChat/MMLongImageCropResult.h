@class UIImage;

@interface MMLongImageCropResult : NSObject

@property (retain, nonatomic) UIImage *croppedImage;
@property (nonatomic) double topCroppedRatio;
@property (nonatomic) double bottomCroppedRatio;

- (id)description;
- (void).cxx_destruct;

@end
