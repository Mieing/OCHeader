@class NSArray, UICollectionView, NSString, UIView, NSTimer;
@protocol AWEPzEngineProtocol, AWEHPRemoteTipsEntryProtocol, AWEPzComponentProtocol;

@interface AWEHomePageRemoteTipsEntry : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEAlertProtocol>

@property (weak, nonatomic) id<AWEHPRemoteTipsEntryProtocol> delegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGPoint { double x; double y; } animateAnchorPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldPanelFrame;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *currentShowModules;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;
@property (copy, nonatomic) id /* block */ showPanelOnView;
@property (readonly, nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)updatePanelThemeStyle:(long long)a0;
- (void)p_invalidateTimer;
- (id)panelIdentity;
- (void)p_removeAlertIfNeed;
- (double)homePageRemotePanelAnimateTime;
- (void)updateItemData;
- (BOOL)canShowComponentWithComponentID:(id)a0;
- (struct CGPoint { double x0; double x1; })p_getFeedButtonCenter;
- (double)homePageRemoteTipsEntryAutoDismissTime;
- (void)p_timeToClose;
- (void)p_EntryDidShow;
- (void)p_dismissPanelWithReason:(long long)a0 animateType:(long long)a1;
- (void)p_dismissPanelWithReason:(long long)a0 animateType:(long long)a1 clickModuleType:(long long)a2;
- (void)didDismissComponentWithClickModuleType:(long long)a0;
- (void)p_dismissPanelWithReason:(long long)a0 animateType:(long long)a1 clickModuleType:(long long)a2 completion:(id /* block */)a3;
- (long long)homepageRemoteGuideTipsCloseType;
- (void)didShowComponent;
- (long long)moduleTypeWithRemoteItemModel:(id)a0;
- (void)showPanelOnView:(id)a0 withBottomPadding:(double)a1 withEnterMethod:(id)a2;
- (void)dismissPanelWithReason:(long long)a0 animateType:(long long)a1;
- (void)p_dismissPanelWithReason:(long long)a0 animateType:(long long)a1 completion:(id /* block */)a2;
- (void)refreshAutoDismissTiming;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
