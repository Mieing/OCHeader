@class IESECLiveReplayPlayControlView, IESECLiveReplayMaskComponentView, UILabel, IESECReplayGoodsHorizontalListView, IESECLiveRoomButton, IESECLiveReplayDataStore, NSMutableArray, IESECReplayMessageListViewController, IESECLiveReplaySubtitleView, IESECLiveReplayLiveCardView, IESECLiveReplayCartView, UIViewController, IESECLiveReplayProgressComponentView, IESECLiveReplayAvatarComponentView, NSString, UIImageView;

@interface IESECLiveReplayInteractionView : UIView <UIGestureRecognizerDelegate, IESECReplayGoodsHorizontalListViewDelegate, IESECLiveReplayInteractionViewProtocol, IESECLiveReplayDataStoreOwner>

@property (retain, nonatomic) IESECLiveReplayLiveCardView *promotionView;
@property (retain, nonatomic) IESECReplayGoodsHorizontalListView *promotionListView;
@property (retain, nonatomic) IESECReplayMessageListViewController *messageListVC;
@property (retain, nonatomic) IESECLiveReplaySubtitleView *subTitleView;
@property (retain, nonatomic) IESECLiveReplayMaskComponentView *maskComponentView;
@property (retain, nonatomic) IESECLiveReplayPlayControlView *playControlView;
@property (retain, nonatomic) IESECLiveReplayAvatarComponentView *avatarView;
@property (retain, nonatomic) IESECLiveReplayCartView *cartView;
@property (retain, nonatomic) IESECLiveRoomButton *roomButton;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UILabel *navLabel;
@property (nonatomic) BOOL hasClickedBackButton;
@property (retain, nonatomic) NSMutableArray *componentViews;
@property (retain, nonatomic) IESECLiveReplayProgressComponentView *progressComponentView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ cartClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)addSubviews;
- (void)configAvatar;
- (void)showNavbarTitle;
- (void)configPlayImage;
- (void)dataStoreChanged;
- (void)updateStoreOnly;
- (void)updateProgress:(double)a0 totalDuration:(double)a1;
- (void)showPlayIcon:(BOOL)a0;
- (void)videoDidFinishPlay;
- (void)followStatusChange:(long long)a0;
- (void)backGuideDidAppear;
- (void)backGuideDidDisappear;
- (void)bindSubtitleInfo;
- (void)didClickedShopCart:(id)a0;
- (void)liveRoomClick;
- (void)updateShopCartState;
- (void)showRoomButtonIfNeed;
- (void)updateSubtitlePositionWithGoodsListViewHidden:(BOOL)a0;
- (void)updateCurrentReplayItemWithModel:(id)a0;
- (void)showViewInParent:(id)a0;
- (void)triggerGoBack;
- (void)goodsListViewDidHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)goBack;
- (id)initWithStore:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)addObserver;
- (void)dealloc;

@end
