@class NSString, UIColor, UIFont;

@interface WCLivePhotoButtonModel : NSObject

@property (nonatomic) double paddingX;
@property (nonatomic) double paddingY;
@property (retain, nonatomic) NSString *liveIconName;
@property (retain, nonatomic) UIColor *liveIconColor;
@property (nonatomic) struct CGSize { double width; double height; } liveIconSize;
@property (nonatomic) struct CGSize { double width; double height; } liveIconPos;
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
@property (retain, nonatomic) UIColor *blurEffectTintColor;

- (id)initWithStyle:(unsigned long long)a0;
- (BOOL)setupLivePhotoButtonStyle:(unsigned long long)a0;
- (void)_setupLivePhotoViewOn;
- (void)_setupLivePhotoViewOff;
- (void)_setupLivePhotoViewDisabled;
- (void)_setupLiveViewShow;
- (void)_setupLiveViewPlay;
- (void).cxx_destruct;

@end
