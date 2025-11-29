@class AWEListDataController, NSString, AWEVideoDescriptionPanelViewModel, AWEAwemeModel, AWEPageContext, UICollectionView, UIViewController;
@protocol AWEPlayInteractionContextProtocol, AWEDPlayerFeedViewControllerProtocol;

@interface AWEFeedCollectionContainerContext : AWEPageContext

@property (retain, nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> *playVideoViewController;
@property (retain, nonatomic) AWEVideoDescriptionPanelViewModel *panelViewModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *playInteractionContext;
@property (weak, nonatomic) id interactionViewController;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) id /* block */ dataControllerChangedBlock;
@property (retain, nonatomic) UICollectionView *containerCollecitionView;
@property (retain, nonatomic) AWEAwemeModel *firstResponseModel;
@property (nonatomic) BOOL isFetchError;
@property (nonatomic) BOOL isLoadingMoreError;
@property (nonatomic) BOOL haveNoMoreData;
@property (nonatomic) double loadingViewHeight;
@property (nonatomic) double singleFeedCoverGuideViewHeight;
@property (copy, nonatomic) NSString *justWatchedItemID;
@property (nonatomic) double headerContentHeight;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) double contentViewTopOffsetY;
@property (nonatomic) double contentViewBottomOffsetY;
@property (nonatomic) BOOL isShowingSuspendView;
@property (nonatomic) BOOL isLongDesc;
@property (nonatomic) BOOL hasShowedGuideViewInSingleMode;
@property (nonatomic) BOOL isSingleMode;

- (void)updateContextWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2 playInteractionContext:(id)a3 interactionViewController:(id)a4 playVideoViewController:(id)a5;
- (void)updateContextWithAwemeModel:(id)a0 referString:(id)a1 playInteractionContext:(id)a2 interactionViewController:(id)a3 playVideoViewController:(id)a4;
- (BOOL)isJustWatchedModel:(id)a0;
- (double)singleFeedCoverGuideTitleOffset;
- (void).cxx_destruct;

@end
