@class IESLiveWebpLoadingView, NSString, IESHYURLParserHandler, CreateInfoResponse_CreateInfo, NSObject, NSMutableArray, IESLiveOpenLivePermissionModel, IESLiveGuideToolBarItem, IESLiveLocalLifeComponentApi;
@protocol OS_dispatch_group, IESLiveGuideToolBarProvider, IESLiveGuideLocalLifeAction, IESLiveURLSchemaHandler;

@interface IESLiveGuideLocalLifeComponentFragment : IESLiveGuideComponent <IESLiveLocalLifeGuideFragmentProtocol, IESLiveGuideTimorEntryAction, IESLiveGuideWelfareEntryAction, IESLiveGuideShopEntryAction, IESLiveGuideActions, IESLiveCommercialComponentsActions>

@property (retain, nonatomic) IESLiveGuideToolBarItem *localLifeItem;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveGuideLocalLifeAction> localLifeAction;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (nonatomic) BOOL isShopEntryFull;
@property (nonatomic) BOOL isPaidLiveTicketEntryFull;
@property (retain, nonatomic) IESLiveLocalLifeComponentApi *localLifeApi;
@property (retain, nonatomic) IESHYURLParserHandler *hyURLHandler;
@property (nonatomic) long long goodsCount;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL didComponentFragmentMount;
@property (nonatomic) unsigned long long apiStatus;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *requestGroup;
@property (retain, nonatomic) IESLiveOpenLivePermissionModel *permissionModel;
@property (nonatomic) BOOL hasAddTimes;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModelInfo;
@property (nonatomic) BOOL hasShowTrackSended;
@property (nonatomic) unsigned long long currentLiveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)unregisterSubscriber;
- (void)bindActions;
- (void)registerEventSubscriber;
- (void)willSwitchToCommercialComponent:(unsigned long long)a0;
- (void)willRemoveCommercialComponent:(unsigned long long)a0;
- (void)registerSubscribes;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)goodsDidChangeWithEmpty:(BOOL)a0;
- (void)itemClick;
- (id)trackClickParams:(id)a0;
- (void)updatePickerGoodsCount:(long long)a0;
- (id)generateRoomCreateWithParams:(id)a0;
- (BOOL)selectLocalLife;
- (long long)localLifeGoodsCount;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)guideTimorModelDidChange;
- (BOOL)isTimorEntryFull;
- (void)guideWelfareModelDidChange;
- (BOOL)isWelfareEntryFull;
- (void)liveTypeChangeAction:(unsigned long long)a0;
- (void)dataInit;
- (id)kYellowDotDidShow;
- (void)appendPayloadParam;
- (void)judgeShowLifeEntrance;
- (id)yellowDotShowTimesKey;
- (void)fetchaLocalLifeApi;
- (void)fetcUserPermission;
- (void)sendOpenLocalLifeWithSuccess:(BOOL)a0 jumpUrl:(id)a1 failReason:(id)a2;
- (id)addCommonParamsToSchema:(id)a0;
- (id)generateRoomCreate;
- (id)trackShowParams:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
