@class IESECMallShopMomentStatusView, IESECMallShopMomentContext, IESECListKitCardPreloader, NSString, UIView, IESECLynxCard, IESECListKitBFFViewController;

@interface IESECMallShopMomentUIService : NSObject <UICollectionViewDelegate, IESECLynxCardDelegate, IESECListCardsContextDelegate, IESECListKitBFFViewControllerDelegate, IESECMallShopMomentUIService>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (retain, nonatomic) IESECListKitCardPreloader *lynxCardPreloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESECLynxCard *topView;
@property (readonly, nonatomic) IESECLynxCard *liveBgView;
@property (readonly, nonatomic) IESECLynxCard *feedBgView;
@property (readonly, nonatomic) double liveCardHeight;
@property (readonly, nonatomic) IESECListKitBFFViewController *listVC;
@property (readonly, nonatomic) IESECMallShopMomentStatusView *statusView;

- (void)loadMore;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (id)currentListContextIdForCards;
- (id)listKitEnvIdentifier;
- (void)cellWillDisplay:(id)a0 source:(unsigned long long)a1 section:(long long)a2 index:(long long)a3 isFirstShow:(BOOL)a4 lynxUrl:(id)a5;
- (void)listViewShouldLoadMore;
- (long long)loadMoreRangeSize;
- (void)footerEndRefreshingWithHasMore:(BOOL)a0;
- (void)layoutLiveBgWithHybrid:(id)a0;
- (void)layoutFeedBg;
- (void)addStatusView;
- (void)setupPreloader;
- (void)injectListVC:(id)a0;
- (id)jsbService;
- (void)setupShopFollowTabTabUI;
- (id)createLynxCardWithSchema:(id)a0 ID:(id)a1 lynxCard:(id *)a2;
- (void)createTopViewIfNeeded;
- (void)createLiveBgView;
- (void)createFeedBgView;
- (void)setupMallShopMomentUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupFooter;

@end
