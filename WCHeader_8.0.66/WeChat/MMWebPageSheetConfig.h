@class UIColor, NSDictionary, UIView;

@interface MMWebPageSheetConfig : NSObject

@property (nonatomic) BOOL usePercentOnFullPage;
@property (nonatomic) double pageSheetHeightPercent;
@property (nonatomic) BOOL forcePortrait;
@property (nonatomic) BOOL hideBgMask;
@property (nonatomic) BOOL transferTouchEventInBgMask;
@property (retain, nonatomic) UIColor *maskBackgroundColor;
@property (nonatomic) BOOL navTranslucent;
@property (nonatomic) double foldIconAngle;
@property (nonatomic) unsigned long long leftBtnMode;
@property (copy, nonatomic) id /* block */ leftBtnActionBlock;
@property (copy, nonatomic) id /* block */ moreBtnActionBlock;
@property (nonatomic) BOOL useDefaultMoreBtn;
@property (nonatomic) BOOL bShowNavRefresh;
@property (nonatomic) unsigned int dragDownButtonStyle;
@property (nonatomic) BOOL showFromRightToLeftAtLandscape;
@property (retain, nonatomic) UIColor *navButtonTintColor;
@property (nonatomic) unsigned int webA8keyScene;
@property (nonatomic) unsigned int reportEnterScene;
@property (retain, nonatomic) NSDictionary *dictWebEnvInfo;
@property (retain, nonatomic) NSDictionary *dictExtInfo;
@property (retain, nonatomic) UIView *webNavigationLoadingView;
@property (retain, nonatomic) UIColor *webviewBackgroundColor;
@property (retain, nonatomic) UIColor *navigationBarColor;
@property (nonatomic) BOOL enableDragToClose;
@property (nonatomic) BOOL recognizeHorizontalWhenDragToClose;
@property (nonatomic) BOOL ignoreDragVelocityThreshold;
@property (nonatomic) double dragToCloseRatio;
@property (nonatomic) BOOL checkLimitedMode;
@property (nonatomic) double edgeSlideCloseThreshold;
@property (nonatomic) BOOL showHostInSubtitle;
@property (copy, nonatomic) id /* block */ callbackWebViewDidShare;
@property (copy, nonatomic) id /* block */ callbackWebViewDidJumpApp;
@property (copy, nonatomic) id /* block */ callbackWebViewDidJumpAppStore;
@property (copy, nonatomic) id /* block */ callbackWebViewDidCancelJumpApp;
@property (copy, nonatomic) id /* block */ callbackWebViewDidAlertJumpApp;
@property (copy, nonatomic) id /* block */ callbackWebViewDidShowMenu;
@property (copy, nonatomic) id /* block */ callbackWebViewDidReturn;
@property (nonatomic) BOOL isPushFromWebPageSheet;
@property (nonatomic) BOOL isInPreviewMode;

- (void)setUsePercentOnFullPage:(BOOL)a0;
- (BOOL)usePercentOnFullPage;
- (id)init;
- (void).cxx_destruct;

@end
