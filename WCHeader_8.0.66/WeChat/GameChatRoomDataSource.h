@class NSMutableDictionary, GCLoadingMoreCellModel, NSMutableArray, GCCollectionViewManager;

@interface GameChatRoomDataSource : NSObject

@property (retain, nonatomic) NSMutableDictionary *localClisMsgDict;
@property (retain, nonatomic) NSMutableDictionary *serverSeqDict;
@property (retain, nonatomic) NSMutableArray *cellModelArray;
@property (retain, nonatomic) GCCollectionViewManager *viewManager;
@property (retain, nonatomic) GCLoadingMoreCellModel *loadMoreCellModel;
@property (nonatomic) long long lastMaxReceiveSeq;
@property (nonatomic) unsigned long long minReceiveMessageSeq;
@property (nonatomic) unsigned long long maxReceiveMessageSeq;
@property (nonatomic) BOOL isChosenChannel;
@property (nonatomic) BOOL isNormalDataSource;
@property (nonatomic) long long channelId;
@property (nonatomic) BOOL isLoadCacheData;

- (id)init;
- (id)initWithLoadMoreCellModel:(id)a0;
- (BOOL)canAddModel:(id)a0;
- (id)filteredCellModelArray:(id)a0 msgAlreayInLocalArray:(id)a1;
- (void)replaceLocalMsgWithServerMsg:(id)a0;
- (BOOL)checkArrayEqualViewManager;
- (void)loadFirstPageWithCellModelArray:(id)a0;
- (void)refreshWithCellModelArray:(id)a0 andInvisibleList:(id)a1;
- (BOOL)checkContainsSeq:(unsigned long long)a0;
- (void)enumerateChatBaseCellModel:(id /* block */)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)handleChosenChannelWithRefreshCellModelArray:(id)a0;
- (id)logInfoWithDict:(id)a0 tip:(id)a1;
- (void)insertNewCellModel:(id)a0;
- (BOOL)appendModel:(id)a0;
- (void)onNewCellModelAdd:(id)a0;
- (void)removeLoadMoreCell;
- (void)reloadData;
- (void)clearAllData;
- (BOOL)isEmpty;
- (void)clearPreviousDataIfNeed;
- (void)clearCacheDataIfNeed;
- (id)timeCellModelForTime:(long long)a0;
- (id)centerTipTextModelForText:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (long long)intervalWithLastMsgTime;
- (long long)intervalWithLastTimeNode;
- (id)addTimeModel:(id)a0 isApend:(BOOL)a1 lastMsgTime:(long long)a2 lastTimeNodeTime:(long long)a3 firstServerNode:(id)a4;
- (void)updateMinAndMaxSeqWithCellArray:(id)a0;
- (void)appendModelArray:(id)a0 complection:(id /* block */)a1;
- (void)logNewMsgArrayInsert:(id)a0 arrayWithTimeNode:(id)a1 fromLog:(id)a2;
- (void)loadCachedModelArray:(id)a0 complection:(id /* block */)a1;
- (void)stopRefreshHeader;
- (id)filterdCellModelArray:(id)a0 fromLog:(id)a1;
- (void)onPreviousCellModelReceived:(id)a0 fromLog:(id)a1;
- (void)clearMinAndMaxMsgSeq;
- (void)logStr:(id)a0;
- (void)logWithFormat:(id)a0;
- (void).cxx_destruct;

@end
