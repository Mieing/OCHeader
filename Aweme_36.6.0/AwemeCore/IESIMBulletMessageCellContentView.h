@class NSString, UIView;
@protocol IESIMBulletContainerProtocol, IESIMBulletCellContentViewDelegate;

@interface IESIMBulletMessageCellContentView : UIView <IESIMBulletContainerLifeCycleDelegate, IESIMBulletCellContentViewProtocol>

@property (copy, nonatomic) NSString *bulletScene;
@property (copy, nonatomic) NSString *attachedSchema;
@property (copy, nonatomic) NSString *attachedDataIdentifier;
@property (retain, nonatomic) UIView<IESIMBulletContainerProtocol> *bulletContainerView;
@property (nonatomic) long long bulletGenerateType;
@property (nonatomic) long long cellGenerateType;
@property (nonatomic) BOOL onFirstUse;
@property (retain, nonatomic) NSString *identify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESIMBulletCellContentViewDelegate> viewDelegate;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)container:(id)a0 didReceiveError:(id)a1;
- (void)configWithBulletContext:(id)a0;
- (void)updateBulletDataWithBulletContext:(id)a0 forceRefresh:(BOOL)a1;
- (void)viewWillDisplayByMessageVisibleLifeCycle;
- (void)viewDidEndDisplayingByMessageVisibleLifeCycle;
- (void)container:(id)a0 didEndLoadOnMainThreadWithLoadType:(long long)a1;
- (void)container:(id)a0 reuseWithSize:(struct CGSize { double x0; double x1; })a1;
- (void)p_refreshBulletContainerViewInfoIfNeeded;
- (void)p_updateDefaultUIWithContext:(id)a0;
- (void)p_saveBulletContainerView;
- (void)p_tryRefreshBulletContainerViewInfoByReusePlanB;
- (id)p_bulletContainerViewFromReusePool;
- (BOOL)p_reuseContainerEnabled;
- (void)p_reloadMessageCellWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_clearBackgroundColorIfNeeded;
- (void)tryToStartPlaying;
- (void)tryToStopPlaying;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewControllerWillAppear;
- (id)init;
- (void)viewControllerDidDisappear;
- (void)layoutSubviews;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
