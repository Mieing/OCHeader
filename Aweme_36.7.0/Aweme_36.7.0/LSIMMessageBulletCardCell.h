@class NSString, LSIMBulletContainerView, UIView;

@interface LSIMMessageBulletCardCell : LSIMChatDetailBaseCellView <LSIMBulletContainerLifeCycleDelegate>

@property (retain, nonatomic) LSIMBulletContainerView *bulletContainerView;
@property (weak, nonatomic) UIView *msgCellContainerView;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *attachedSchema;
@property (copy, nonatomic) NSString *attachedDataIdentifier;
@property (nonatomic) long long bulletGenerateType;
@property (nonatomic) long long cellGenerateType;
@property (nonatomic) BOOL onFirstUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithCellVM:(id)a0 listSize:(struct CGSize { double x0; double x1; })a1;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)handleCellWillDisplay:(id)a0;
- (void)p_refreshBulletContainerViewInfoIfNeeded;
- (void)p_saveBulletContainerView;
- (id)p_bulletContainerViewFromReusePool;
- (BOOL)p_reuseContainerEnabled;
- (void)container:(id)a0 didUpdatePreserveData:(id)a1;
- (void)configWithCellVM:(id)a0;
- (double)msgContentMaxWidth;
- (void)p_tryRefreshBulletContainerViewInfoByReuseViewPool;
- (BOOL)floatEqualToZero:(double)a0;
- (void)p_updateContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)handleCellDidEndDisplaying;
- (id)bulletCellVM;
- (void)p_setupUI;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
