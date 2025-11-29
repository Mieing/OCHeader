@class NSString, AWEDCFeedPageContext, AWEAwemeModel, NSMutableArray, UIViewController;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEMVChannelOneBigEightSmallLayout : NSObject <AWEMVChannelBuildLayoutProtocol>

@property (retain, nonatomic) NSMutableArray *starCardList;
@property (retain, nonatomic) NSMutableArray *horizontalCardList;
@property (retain, nonatomic) NSMutableArray *portraitCardList;
@property (retain, nonatomic) AWEAwemeModel *largeBannerModel;
@property (nonatomic) unsigned long long lastCardState;
@property (nonatomic) BOOL finishARound;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containerViewModel;
- (long long)loadMoreRetryCount;
- (id)getMVPageContext;
- (id)createSectionViewModels:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1 otherInfo:(id)a2;
- (void)appendSectionViewModel:(id)a0 lastSectionViewModel:(id)a1;
- (id)createSkeletonSectionViewModels;
- (long long)currentSmallCardCount;
- (void)filterXBigYSmallCardVideoData:(id)a0;
- (id)loopAddCardWithIsRefresh:(BOOL)a0;
- (BOOL)addPlayerCard:(id)a0 isRefresh:(BOOL)a1;
- (BOOL)addHorizontalCard:(id)a0 lastSectionViewModel:(id)a1 isRefresh:(BOOL)a2;
- (BOOL)addPortraitCard:(id)a0 lastSectionViewModel:(id)a1 count:(long long)a2 isRefresh:(BOOL)a3;
- (id)findValidPlayerCardModel;
- (id)getHorizontalCardModels:(long long)a0;
- (BOOL)finishARoundHorizontalCardWithModels:(id)a0 count:(long long)a1;
- (void)tryAppendHorizontalCardIfNeed;
- (id)getPortraitCardModels:(long long)a0;
- (BOOL)finishARoundPortraitCardWithModels:(id)a0 count:(long long)a1;
- (void)tryAppendPortraitCardIfNeed;
- (void).cxx_destruct;
- (void)resetState;

@end
