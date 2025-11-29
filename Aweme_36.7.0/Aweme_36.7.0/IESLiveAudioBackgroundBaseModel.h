@class NSArray, NSURL, NSData, UIImage, UIView;

@interface IESLiveAudioBackgroundBaseModel : NSObject

@property (nonatomic) long long backgroundType;
@property (retain, nonatomic) NSURL *videoBgFileUrl;
@property (retain, nonatomic) NSData *gifImageData;
@property (copy, nonatomic) NSArray *imageBg;
@property (copy, nonatomic) NSArray *imageAnimatedBg;
@property (copy, nonatomic) NSArray *downgradingBg;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIView *videoMVBackgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) BOOL backgroundImageViewHidden;
@property (nonatomic) BOOL backgroundAnimatedImageViewHidden;
@property (nonatomic) BOOL backgroundVideoPlayerHidden;
@property (nonatomic) BOOL backgroundMaskViewHidden;
@property (nonatomic) BOOL backgroundInAuditMaskHidden;
@property (nonatomic) BOOL isUGC;
@property (nonatomic) BOOL backgroundImageAlphaGradientHidden;
@property (nonatomic) long long audioThemeImgType;
@property (retain, nonatomic) UIImage *bgImage;
@property (retain, nonatomic) UIImage *animatedBgImage;
@property (retain, nonatomic) UIImage *downgradingBgImage;

- (void).cxx_destruct;

@end
