@class NSString;
@protocol AWEIMLiveMessageAutoPlayInteractorInterface;

@interface AWEIMMessageBulletComponent : AWEIMFlexComponent <IESIMBulletCellContentViewDelegate, AWEIMMessageContentInterface>

@property (weak, nonatomic) id<AWEIMLiveMessageAutoPlayInteractorInterface> liveMessageAutoPlayInteractor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)getStorageBulletWidth:(id)a0;
+ (id)getStorageBulletHeight:(id)a0;
+ (void)setStorageBulletWidth:(id)a0 uniqueId:(id)a1;
+ (void)setStorageBulletHeight:(id)a0 uniqueId:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)zoomTransitionTargetView;
- (id)visibleContentView;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)p_addObserver;
- (void)p_updateExtraInfoForFPS;
- (BOOL)shouldUseDefaultBackgroundColor;
- (BOOL)enableClearDefaultBGColorAfterLoadWithSchema:(id)a0;
- (BOOL)bulletTemplateCanReuseWithSchema:(id)a0;
- (void)bulletContainerDidUpdateSize:(struct CGSize { double x0; double x1; })a0;
- (void)bulletContainerDidFetchedResource:(id)a0 error:(id)a1;
- (void)bulletContainerDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)bulletContainerDidReceiveError:(id)a0;
- (void)bulletContainerDidEndConfigWithPerfInfo:(id)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_setupReadKVO;
- (struct CGSize { double x0; double x1; })cellSizeWithMesasge:(id)a0;
- (struct CGSize { double x0; double x1; })bulletInnerCardDefaultSizeWithMessage:(id)a0;
- (void)p_handleDeleteMessageCellNotification:(id)a0;
- (void)p_trackContainerBindEndWithPerfInfo:(id)a0;
- (double)bulletViewWidthFromMessageCellWidth:(double)a0;
- (double)bulletViewXFromBulletViewWidth:(double)a0;
- (double)bulletViewY;
- (double)messageCellWidthFromBulletViewWidth:(double)a0;
- (void)reloadCurrentCellAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end
