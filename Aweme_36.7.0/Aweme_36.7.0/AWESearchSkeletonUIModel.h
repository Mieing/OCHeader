@class UIImage, UIColor;

@interface AWESearchSkeletonUIModel : AWEBaseApiModel

@property (retain, nonatomic) UIImage *iconImageLight;
@property (retain, nonatomic) UIImage *iconImageDark;
@property (nonatomic) struct CGSize { double width; double height; } iconViewSize;
@property (nonatomic) BOOL disableAnimation;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;
- (BOOL)hasImage;

@end
