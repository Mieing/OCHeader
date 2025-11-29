@class UIView, NSString, AWEFavoriteSegmentedControl;

@interface AWEFavoriteTabListContainerViewHolder : AWEBaseTabListViewHolder <AWEFavoriteContainerLifeCycleProtocol>

@property (retain, nonatomic) AWEFavoriteSegmentedControl *segmentedControl;
@property (retain, nonatomic) UIView *bottomLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewHolder;
- (void)containerViewWillDisappear;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (void)containerViewWillAppear;
- (id)tabLockIconImage;
- (id)tabLockSelectedIconImage;
- (id)tabRedDotImage;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;

@end
