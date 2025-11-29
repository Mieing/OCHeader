@class NSArray, NSMutableDictionary, NSString, AWEVideoPublishViewModel, NSMutableArray, NSNumber;
@protocol ACCSideslipPropPanelCellModelBuilderProtocol, IESServiceProvider;

@interface ACCSideslipAIGCPanelListDataProvider : NSObject <ACCSideslipAIGCPanelListDataProviderProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) NSArray *totalList;
@property (retain, nonatomic) NSArray *lastList;
@property (nonatomic) BOOL isPlaceHolder;
@property (nonatomic) long long rightFirstIndex;
@property (nonatomic) long long expectFocusIndex;
@property (nonatomic) BOOL expectFocusAnimated;
@property (nonatomic) BOOL isSupportCancelItem;
@property (retain, nonatomic) NSMutableDictionary *propPickCellModelDic;
@property (weak, nonatomic) id<ACCSideslipPropPanelCellModelBuilderProtocol> cellModelBuilder;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSNumber *reloadIndex;
@property (nonatomic) long long totalListCount;
@property (retain, nonatomic) NSNumber *retryViewShowSignal;
@property (retain, nonatomic) NSNumber *bubbleShowSiganl;
@property (readonly, nonatomic) BOOL skipAutoLocate;
@property (readonly, nonatomic) unsigned long long listDataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listDataProviderWithServiceProvider:(id)a0 repository:(id)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)cellModelWithModelId:(id)a0;
- (id)tabNameWithIndex:(long long)a0;
- (void)resetInitialFocusInfo;
- (void)clearDatasource;
- (void)refreshItem:(id)a0 atIndex:(long long)a1;
- (void)resetInitialCellModels;
- (void)buildNextCellIfNeed:(id)a0;
- (void)updateFocusIndex:(long long)a0;
- (void)refreshNames:(id)a0;
- (void)refreshNamesAIProcess;
- (id)getCellModelArrayFromEffectId:(id)a0;
- (id)AIGCRequestMsgBody:(id)a0;
- (id)AIGCSelectMsgBodyAtIndex:(long long)a0;
- (id)AIGCRetryMsgBodyAtIndex:(long long)a0;
- (id)AIGCAsyncModeMsgBodyWithAsync:(BOOL)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)buildPlaceHolderCellModels;
- (id)cellModelWithEffectId:(id)a0;
- (void)updateCellIconUse:(id)a0 request:(id)a1 complete:(id /* block */)a2;
- (BOOL)hasContainEffect:(id)a0;
- (void)buildInitialCellModels;
- (id)AIGCRequestInfoMsgBody:(id)a0 withMaxCnt:(long long)a1;
- (void).cxx_destruct;

@end
