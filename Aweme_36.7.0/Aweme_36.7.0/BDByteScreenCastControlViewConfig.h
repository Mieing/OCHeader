@class UIColor, NSString, BDByteScreenCastAppUIConfigInfo, UIView, UIViewController;

@interface BDByteScreenCastControlViewConfig : NSObject

@property (nonatomic) unsigned long long controlViewStyle;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (retain, nonatomic) UIColor *containerViewBgColor;
@property (retain, nonatomic) UIColor *controlViewBgColor;
@property (nonatomic) BOOL hideSeekViewInFoldStatus;
@property (nonatomic) unsigned long long landscapeActionStyle;
@property (nonatomic) BOOL onlyPerformBackButtonClick;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldControlViewOriginFrame;
@property (nonatomic) unsigned long long defaultShowingStyle;
@property (nonatomic) BOOL supportSeries;
@property (nonatomic) BOOL supportCharity;
@property (nonatomic) BOOL supportDanmaku;
@property (nonatomic) BOOL supportClarityLimit;
@property (nonatomic) BOOL supportLocalCast;
@property (nonatomic) BOOL showControlViewIgnoreCastingState;
@property (nonatomic) BOOL needUpdateControlViewCastingState;
@property (nonatomic) unsigned long long playStatus;
@property (nonatomic) unsigned long long castStatus;
@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UIView *popupContainerView;
@property (nonatomic) double playerViewInsetsTop;
@property (nonatomic) double foldControlViewInsetsBottom;
@property (nonatomic) struct CGSize { double width; double height; } stickPlayerSize;
@property (copy, nonatomic) NSString *customControlViewClassName;
@property (copy, nonatomic) NSString *customSearchViewClassName;
@property (copy, nonatomic) NSString *customClarityChooseViewClassName;
@property (copy, nonatomic) NSString *customFloatBallClassName;
@property (copy, nonatomic) NSString *customAirPlayMirrorGuideViewClassName;
@property (copy, nonatomic) NSString *customCastSettingPortraitClassName;
@property (copy, nonatomic) NSString *customSpeedPortraitClassName;
@property (copy, nonatomic) NSString *customResolutionPortraitClassName;
@property (copy, nonatomic) NSString *customCastSettingLandscapeClassName;
@property (copy, nonatomic) NSString *customSpeedLandscapeClassName;
@property (copy, nonatomic) NSString *customResolutionLandscapeClassName;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (copy, nonatomic) NSString *playerBgImageName;
@property (copy, nonatomic) id /* block */ filterDeviceBlock;
@property (copy, nonatomic) id /* block */ optInDeviceBlock;
@property (copy, nonatomic) id /* block */ optOutDeviceBlock;
@property (copy, nonatomic) id /* block */ searchViewWillShow;
@property (copy, nonatomic) id /* block */ clarityChooseViewWillShow;
@property (copy, nonatomic) id /* block */ searchViewWillDismiss;
@property (copy, nonatomic) id /* block */ clarityChooseViewWillDismiss;
@property (copy, nonatomic) id /* block */ updateControlViewConfigBlock;
@property (copy, nonatomic) id /* block */ dismissControlViewBlock;
@property (copy, nonatomic) id /* block */ screenCastStatusUpdateBlock;
@property (copy, nonatomic) id /* block */ controlViewGreyModeClickedBlock;
@property (copy, nonatomic) id /* block */ restartButtonDidClicked;

+ (id)controlViewConfigWithModel:(id)a0 modelConfig:(id)a1;

- (void).cxx_destruct;

@end
