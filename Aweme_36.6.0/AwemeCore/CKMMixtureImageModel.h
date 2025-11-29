@class UIImage, UIColor, UIView;

@interface CKMMixtureImageModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } finalImageSize;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *foregroundImage;
@property (nonatomic) double foregroundNormalizedWidthScale;
@property (nonatomic) double foregroundImageNormalizedCornerRadius;
@property (retain, nonatomic) UIColor *foregroundImageBorderColor;
@property (nonatomic) double foregroundImageNormalizedBorderWidth;
@property (nonatomic) double normalizedTopOffset;
@property (nonatomic) double normalizedLeftOffset;
@property (nonatomic) struct CGSize { double width; double height; } normalizedWatermarkImageSize;
@property (nonatomic) double normalizedWatermarkStringWidth;
@property (nonatomic) double normalizedWatermarkStringFont;
@property (nonatomic) double normalizedBottomOffsetForWatermark;
@property (nonatomic) double normalizedRightOffsetForWatermark;
@property (retain, nonatomic) UIImage *mapImage;
@property (retain, nonatomic) UIView *avatarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRect;

- (void).cxx_destruct;

@end
