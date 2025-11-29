@class UIColor, NSString, UIFont, UIImage;

@interface MJLivePhotoButtonModel : NSObject

@property (nonatomic) double paddingX;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingY;
@property (retain, nonatomic) NSString *liveIconName;
@property (retain, nonatomic) UIColor *liveIconColor;
@property (nonatomic) struct CGSize { double width; double height; } liveIconSize;
@property (nonatomic) struct CGSize { double width; double height; } liveIconPos;
@property (nonatomic) double liveIconCornerRadius;
@property (retain, nonatomic) UIImage *liveIconImage;
@property (nonatomic) double liveIconBorderWidth;
@property (retain, nonatomic) UIColor *liveIconBorderColor;
@property (retain, nonatomic) UIFont *liveLabelFont;
@property (retain, nonatomic) UIColor *liveLabelTextColor;
@property (retain, nonatomic) NSString *liveLabelText;
@property (nonatomic) struct CGSize { double width; double height; } liveLabelPos;
@property (nonatomic) struct CGSize { double width; double height; } liveLabelSize;
@property (retain, nonatomic) UIColor *liveBtnBgColor;
@property (nonatomic) BOOL enableLiveBtn;
@property (nonatomic) BOOL isShowBtn;
@property (nonatomic) BOOL addBlurEffect;
@property (nonatomic) unsigned int blurEffectStyle;
@property (nonatomic) BOOL scaleAnimationEnabled;

- (id)initWithStyle:(unsigned long long)a0;
- (BOOL)setupLivePhotoButtonStyle:(unsigned long long)a0;
- (void)_setupLivePhotoUnselect;
- (void)_setupLivePhotoSelect;
- (void)_setupLivePhotoViewOn;
- (void)_setupLivePhotoViewOff;
- (void)_setupLivePhotoViewDisabled;
- (void)_setupLiveViewShow;
- (void)_setupLiveViewPlay;
- (void)setUpButtonPadding;
- (void).cxx_destruct;

@end
