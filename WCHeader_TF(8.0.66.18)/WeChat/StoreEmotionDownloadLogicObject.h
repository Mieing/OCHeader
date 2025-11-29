@class NSArray, NSMutableDictionary, EmotionSummary, NSString, OrderedDictionary, NSMutableArray;
@protocol StoreEmotionDownloadLogicObjectDelegate;

@interface StoreEmotionDownloadLogicObject : MMObject <StoreEmotionDownloadLogicObjectDelegate>

@property (retain, nonatomic) NSArray *serverPids;
@property (retain) OrderedDictionary *needDownloadPids;
@property (retain, nonatomic) NSMutableDictionary *emotionsProgress;
@property (retain, nonatomic) NSMutableDictionary *emotionsState;
@property (weak, nonatomic) id<StoreEmotionDownloadLogicObjectDelegate> delegate;
@property (nonatomic) BOOL m_isActive;
@property (retain, nonatomic) NSMutableArray *failedArray;
@property (retain, nonatomic) EmotionSummary *downloadingItemSummary;
@property (nonatomic) int maxWWANDownloadPacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerPids:(id)a0 andDelegate:(id)a1;
- (void)startLogic;
- (void)startLogicWithPids:(id)a0;
- (id)returnDownloadingInfoToMgr;
- (float)getDownloadingProgressFromItem:(id)a0;
- (int)getStateWithItem:(id)a0;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onStoreEmotionDownloadLogicObjectFailedWithItem:(id)a0;
- (BOOL)isActive;
- (void)downloadServerXMLEmotionWithPid:(id)a0;
- (void)startInternalLogic;
- (void)downloadFirstStoreEmoticon;
- (void)getNeededDownloadStoreEmotionFromServerPids:(id)a0;
- (id)getStoreEmotionList;
- (void)configEmotionProgressWithProductID:(id)a0;
- (void)onAllEmotionDownloadFinish;
- (void)downloadHighPrivillageWithItem:(id)a0;
- (void).cxx_destruct;

@end
