@class NSString, AWEDCFeedPageContext, AWEAwemeModel, NSMutableArray, UIViewController;
@protocol AWEDCFeedListViewControllerProtocol;

@interface AWEMVChannelMixLayout : NSObject <AWEMVChannelBuildLayoutProtocol>

@property (retain, nonatomic) AWEAwemeModel *largeCardModel;
@property (retain, nonatomic) NSMutableArray *smallCardArray;
@property (retain, nonatomic) AWEAwemeModel *largeBannerModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mvPageContext;
- (id)createSectionViewModels:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1 otherInfo:(id)a2;
- (void)appendSectionViewModel:(id)a0 lastSectionViewModel:(id)a1;
- (id)createSkeletonSectionViewModels;
- (id)adjustCommonLynxInsertIndexPath:(id)a0;
- (Class)getSmallSectionViewModelClass;
- (void)processAwemeModelData:(id)a0 isRefresh:(BOOL)a1;
- (BOOL)shouldAddLargeCard:(BOOL)a0;
- (unsigned long long)transferLargeCard2SmallCard:(id)a0;
- (void)insertFirstLaunchFirstFetchModels:(id)a0 atIndexPath:(id)a1;
- (void)resetModel;
- (void).cxx_destruct;

@end
