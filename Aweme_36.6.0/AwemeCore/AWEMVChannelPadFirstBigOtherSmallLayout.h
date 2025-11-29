@class NSString, AWEDCFeedPageContext, NSMutableArray, UIViewController;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEMVChannelPadFirstBigOtherSmallLayout : NSObject <AWEMVChannelBuildLayoutProtocol>

@property (retain, nonatomic) NSMutableArray *starCardList;
@property (retain, nonatomic) NSMutableArray *horizontalCardList;
@property (retain, nonatomic) NSMutableArray *extraSkeletonViewModelList;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enablePadConfig;
- (double)padSpacing;
- (id)mvPageContext;
- (id)createSectionViewModels:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1 otherInfo:(id)a2;
- (void)appendSectionViewModel:(id)a0 lastSectionViewModel:(id)a1;
- (id)createSkeletonSectionViewModels;
- (long long)currentExtraSkeletonCardCount;
- (void)filterFirstBigOtherSmallCardVideo:(id)a0 isRefresh:(BOOL)a1;
- (id)buildPlayerCardSectionViewModel;
- (id)skeletonViewModelListWithCount:(long long)a0 enablePadSkeletonCell:(BOOL)a1;
- (id)smallSectionViewModelList;
- (BOOL)enableCardShortageEffect;
- (BOOL)enableCheckLoadMore;
- (long long)extraSkeletonCountToFillColumnWithTotalCount:(long long)a0;
- (void).cxx_destruct;

@end
