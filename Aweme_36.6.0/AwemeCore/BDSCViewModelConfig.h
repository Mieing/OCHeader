@class UIColor, UIImage, BDByteScreenCastAppUIConfigInfo, UIView, UIViewController;

@interface BDSCViewModelConfig : NSObject

@property (nonatomic) unsigned long long controlViewStyle;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (retain, nonatomic) UIColor *containerViewBgColor;
@property (retain, nonatomic) UIColor *controlViewBgColor;
@property (nonatomic) BOOL hideSeekViewInFoldStatus;
@property (nonatomic) unsigned long long landscapeActionStyle;
@property (nonatomic) BOOL onlyPerformBackButtonClick;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldControlViewOriginFrame;
@property (nonatomic) unsigned long long defaultShowingStyle;
@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UIView *popupContainerView;
@property (nonatomic) double playerViewInsetsTop;
@property (nonatomic) double foldControlViewInsetsBottom;
@property (nonatomic) struct CGSize { double width; double height; } stickPlayerSize;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) UIImage *playerBgImage;
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
@property (copy, nonatomic) id /* block */ restartButtonDidClicked;

- (void).cxx_destruct;

@end
