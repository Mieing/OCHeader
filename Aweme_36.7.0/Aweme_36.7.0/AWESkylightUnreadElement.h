@class NSTimer, AWESkylightDotConfig, NSError, AWEConcernSkylightCellModel, NSArray, NSString, AWESkylightUnreadInnerDetailController, AWESkylightUnreadDataController, NSObject, AWEFeedChannelEnterModel, AWESkylightUserUpdateResponseModel;
@protocol AWEConcernSkylightContainerProtocol;

@interface AWESkylightUnreadElement : NSObject <AWEConcernSkylightMessage, AWESkylightUnreadMessage, AWEUserMessage, AWEConcernFollowListUnreadCacheMessage, AWEConcernSkylightElementProtocol>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEConcernSkylightCellModel *cellModel;
@property (retain, nonatomic) AWESkylightUserUpdateResponseModel *responseModel;
@property (weak, nonatomic) NSObject<AWEConcernSkylightContainerProtocol> *skylightContainer;
@property (retain, nonatomic) AWESkylightUnreadDataController *dataController;
@property (nonatomic) BOOL isShowingSkylight;
@property (nonatomic) BOOL isContainerViewAppearing;
@property (nonatomic) BOOL hasScrollToConcern;
@property (nonatomic) BOOL isEnterFromUnreadDotOnFollowTab;
@property (retain, nonatomic) AWESkylightDotConfig *dotConfig;
@property (retain, nonatomic) NSTimer *redDotTimer;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (retain, nonatomic) AWESkylightUnreadInnerDetailController *innerDetailController;
@property (nonatomic) BOOL hasRedDot;
@property (retain, nonatomic) NSArray *highValueUserList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreate;
+ (id)generateWithSkylightContainer:(id)a0 dataController:(id)a1;
+ (id)elementKey;

- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didCancelSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (id)headerConfig;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (void)refreshWithNeedHandleData:(BOOL)a0 complete:(id /* block */)a1;
- (void)clearDataSource;
- (BOOL)shouldShowSkylight;
- (BOOL)shouldShowEmptyInSkylight;
- (struct CGSize { double x0; double x1; })itemSizeWithIndex:(long long)a0 cellModel:(id)a1;
- (void)containerViewWillDisappear;
- (void)containerViewDidAppear;
- (void)containerEnterFollowWithModel:(id)a0;
- (void)willShowSkylightWithAnimated:(BOOL)a0 actionMethod:(unsigned long long)a1;
- (void)willCloseSkylightWithAnimated:(BOOL)a0 actionMethod:(unsigned long long)a1;
- (void)didScrollToConcern:(BOOL)a0;
- (void)didSelectItemAtIndexPath:(id)a0 cellModel:(id)a1;
- (BOOL)removeDataSourceWithUser:(id)a0;
- (id)uniqueIDArrayForDuplicate;
- (void)didShowSkylightWithActionMethod:(unsigned long long)a0;
- (void)updateUnreadEntranceWithModel:(id)a0;
- (void)willShowSkylightWithActionMethod:(unsigned long long)a0;
- (BOOL)canShowUnreadEntrance;
- (void)refreshDataWithNeedUpdateFoldState:(BOOL)a0;
- (BOOL)canRemoveElementWithReponseModel:(id)a0;
- (void)refreshWithNeedHandleData:(BOOL)a0 needHighValueFollow:(BOOL)a1 complete:(id /* block */)a2;
- (id)initWithSkylightContainer:(id)a0;
- (void)showUnreadDotIfNeed;
- (void)enterUnreadDetailWithCellModel:(id)a0;
- (id)displayedUserIDArray;
- (BOOL)removeUnreadFlagEnable;
- (BOOL)isFromLiveSpecialFollowDot;
- (void)hideUnreadRedDotTimer;
- (BOOL)isContainUnreadCell;
- (void).cxx_destruct;
- (id)dataSource;
- (unsigned long long)cellType;
- (void)dealloc;
- (Class)cellClass;
- (void)containerViewDidLoad;
- (void)refreshData;
- (void)addObservers;
- (id)requestError;

@end
