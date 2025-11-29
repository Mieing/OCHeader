@class NSString, NSMutableDictionary;

@interface AWEMVChannelLayoutController : AWEDCFeedBaseController <AWEMVChannelLayoutControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *layoutDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSkeletonCell:(id)a0;

- (void)containerBeforeViewDidLoad;
- (BOOL)isShowingSkeleton;
- (id)mvPageContext;
- (id)createSectionViewModels:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1 otherInfo:(id)a2;
- (void)appendSectionViewModel:(id)a0 lastSectionViewModel:(id)a1;
- (id)createSkeletonSectionViewModels;
- (long long)currentSmallCardCount;
- (id)adjustCommonLynxInsertIndexPath:(id)a0;
- (void)setupChildLayout;
- (id)getCurrentLayout;
- (void)trackSectionCreation:(id)a0 awemeModels:(id)a1 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a2 otherInfo:(id)a3;
- (id)createLoadingBallSectionViewModels;
- (id)getCurrentLayoutType;
- (void).cxx_destruct;

@end
