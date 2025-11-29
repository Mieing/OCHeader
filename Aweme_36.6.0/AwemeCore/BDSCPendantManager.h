@class NSArray, NSMutableDictionary, NSDictionary, NSString, BDScreenCastPlayItem, BDSCPendantView, UIView;

@interface BDSCPendantManager : NSObject <BDSCPendantViewDelegate, BDSCPendantService>

@property (retain, nonatomic) BDSCPendantView *pendantView;
@property (retain, nonatomic) NSDictionary *sceneConfigs;
@property (retain, nonatomic) NSMutableDictionary *tapHandlers;
@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSString *lastSubScene;
@property (retain, nonatomic) BDScreenCastPlayItem *lastPlayItem;
@property (weak, nonatomic) UIView *popoverView;
@property (nonatomic) BOOL isJudgingPopoverShow;
@property (nonatomic) long long lastPendantViewConnectionStatus;
@property (nonatomic) BOOL shouldShowAfterCastingEnd;
@property (retain, nonatomic) NSArray *customForbiddenAttachmentAreas;
@property (nonatomic) BOOL lastShouldShowRequest;
@property (nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isPendantActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enterFromScene:(id)a0 subScene:(id)a1;
+ (id)sharedManager;

- (id)byteScreenCastContext;
- (id)castStatus;
- (void)updatePendantVisibility:(BOOL)a0 forScene:(id)a1 subScene:(id)a2;
- (void)setForbiddenAttachmentAreas:(id)a0;
- (id)pendantHostWindow;
- (void)endPendantService;
- (void)registerPendantTapHandlerWithKey:(id)a0 handler:(id /* block */)a1;
- (id)createPendantView;
- (void)setupSceneConfigs;
- (void)screenCastPlayingStatusDidChange:(id)a0;
- (void)executePendantVisibilityUpdate;
- (BOOL)canShowWith:(BOOL)a0 forScene:(id)a1 subScene:(id)a2;
- (void)etOnPendantViewShow;
- (void)showPendantWithAnimation;
- (void)hidePendantWithAnimation:(BOOL)a0;
- (void)showPendantGuideIfNecessary;
- (double)showAndHideAnimationDuration;
- (id)defaultForbiddenAttachmentAreas;
- (id)mergedForbiddenAttachmentAreas;
- (void)etOnPendantViewClick;
- (void)etOnPendantViewClose:(BOOL)a0;
- (void)onPendantSessionEnd;
- (void)notifyScreenCastingStatusChanged:(BOOL)a0;
- (id)awemeEnterFrom;
- (id)castFrom;
- (void)pendantViewDidRemoveFromSuperview:(id)a0 isAutoRemove:(BOOL)a1;
- (void)unregisterPendantTapHandlerWithKey:(id)a0;
- (void)unregisterAllPendantTapHandlers;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
