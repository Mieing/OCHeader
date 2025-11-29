@class NSMutableArray, MMFinderLiveTaskId;

@interface MMFinderLivePromoteDataModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSMutableArray *promoteInfoList;
@property (retain, nonatomic) NSMutableArray *promoteAvailableItemList;
@property (retain, nonatomic) NSMutableArray *functionPanelDataArray;

+ (id)initWithTaskId:(id)a0 promoteInfoList:(id)a1 promoteAvailableItemList:(id)a2 errorCode:(long long)a3;

- (BOOL)isContainPromoteItem:(id)a0;
- (void)insertPrmoteItem:(id)a0;
- (void)updateNoticePrmoteItem:(id)a0;
- (void)updatePromoteInfoList:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)deletePromoteItem:(id)a0;
- (id)promoteInfoItemsOfType:(unsigned int)a0;
- (id)availableItemOfItemType:(unsigned int)a0;
- (id)promoteInfoItemsOfPromoteId:(unsigned long long)a0;
- (BOOL)isContainPromoteItemWithType:(unsigned int)a0;
- (id)getCurrentShowPromoteInfo;
- (id)getFunctionPanelDataArray;
- (id)addChooseFunctionItem:(id)a0 functionList:(id)a1 disableList:(id)a2;
- (id)getChangeStringWithString:(id)a0 size:(long long)a1;
- (id)changeModelWithItem:(id)a0;
- (void)setupPaidCollectionItemWithSize:(long long)a0 functionItem:(id)a1;
- (void)setupPaidCollectionItemStyle:(long long)a0 functionItem:(id)a1;
- (void)setSubPath:(id)a0;
- (BOOL)shouldShowAnchorTaskGuide:(id)a0;
- (long long)getLiveNoticeItemsCont;
- (BOOL)isLiveNotice:(id)a0;
- (id)finderLiveTask;
- (void).cxx_destruct;

@end
