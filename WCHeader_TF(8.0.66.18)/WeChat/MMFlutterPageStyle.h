@class UIColor, NSObject;
@protocol MMFlutterViewControllerAnimatedTransitioning;

@interface MMFlutterPageStyle : NSObject

@property (retain, nonatomic) Class pageViewControllerClass;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) BOOL needSnapshot;
@property (nonatomic) BOOL needWaitActionBarSnapshot;
@property (nonatomic) BOOL needNavPresented;
@property (nonatomic) BOOL disableAnimation;
@property (nonatomic) BOOL disablePlatformNav;
@property (nonatomic) BOOL disableInteractivePop;
@property (nonatomic) BOOL popOrDismissWithAnimation;
@property (nonatomic) BOOL autoReleaseFlutterView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *beforeRenderBackgroundColor;
@property (nonatomic) long long modalPresentationStyle;
@property (retain, nonatomic) NSObject<MMFlutterViewControllerAnimatedTransitioning> *transitionManager;

- (id)init;
- (id)initWithPageType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
