@class NSString, UIWindow, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWEStudioSplashManager : HTSService <AWEStudioSplashManager>

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) BOOL isStudioSplashShowing;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL shouldShowStickerButtonBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldStudioSplashShowWithShowDebugToast:(BOOL)a0;
+ (BOOL)isStudioSplashShowing;
+ (BOOL)shouldNotShowSuperEntranceMark;
+ (BOOL)hasUserClickedTriedButton;
+ (BOOL)hasUserClickedSkipButton;
+ (void)setIsShowingSuperEntrancePlusIcon:(BOOL)a0;
+ (BOOL)isShowingSuperEntrancePlusIcon;
+ (void)sethasShowingSuperEntrancePlusButtonBubble:(BOOL)a0;
+ (BOOL)hasShowingSuperEntrancePlusButtonBubble;
+ (BOOL)hasClickedSuperEntrancePlusButton;
+ (void)setHasClickedSuperEntrancePlusButton:(BOOL)a0;
+ (BOOL)shouldShowStudioSuperEntrancePlusIconWithAwemeModel:(id)a0;
+ (void)cleanCachedModelResources;
+ (BOOL)shouldShowStickerButtonBubble;
+ (void)setShouldShowStickerButtonBubble:(BOOL)a0;
+ (id)sharedManager;

- (BOOL)shouldStudioSplashShowWithShowDebugToast:(BOOL)a0;
- (void)recorderControllerDidAppear;
- (void)studioSuperEntranceEffectBubbleShowed;
- (id)studioSplashAdaptor;
- (id)initPrivate;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;

@end
