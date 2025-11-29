@class NSString, NSMutableArray;
@protocol WAMainListPageLogicDelegate;

@interface WAMainListPageLogic : MMObject <WAAppItemManagerExtension>

@property (nonatomic) unsigned int previousPageUpdateTimeOfLastLoacalWAAppItem;
@property (nonatomic) unsigned int currentUpdateTimeOfLastLocalWAAppItem;
@property (nonatomic) unsigned int updateTimeOfLastRemoteWAAppItem;
@property (retain, nonatomic) NSMutableArray *exposedItemDatas;
@property (nonatomic) unsigned int initTimeStamp;
@property (nonatomic) BOOL exposeUploaded;
@property (retain, nonatomic) NSMutableArray *historyItems;
@property (weak, nonatomic) id<WAMainListPageLogicDelegate> delegate;
@property (readonly, nonatomic) BOOL hasNoMore;
@property (readonly, nonatomic) unsigned int currentPageNum;
@property (nonatomic) BOOL needStarData;
@property (copy, nonatomic) NSString *openSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNeedStarData:(BOOL)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (BOOL)hasHistoryData;
- (BOOL)removeHistoryItem:(id)a0;
- (BOOL)deleteHistoryItem:(id)a0;
- (void)markItemExposed:(id)a0;
- (void)uploadExposedByLeaveListType:(unsigned long long)a0 clickIndex:(unsigned long long)a1 appid:(id)a2 nickName:(id)a3 isStar:(BOOL)a4;
- (void)uploadExposedByClickIndex:(unsigned long long)a0;
- (void)uploadExposedByDissappearScene:(unsigned long long)a0;
- (BOOL)insertHistoryItemAtTop:(id)a0;
- (id)fetchNextPageLocalData;
- (void)fetchNextPageItems;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(id)a0 localLastUpdateTime:(unsigned int)a1 remoteLastUpdateTime:(unsigned int)a2 hasMore:(BOOL)a3 scene:(unsigned int)a4;
- (void)onWeAppItemsInfoUpdatedErrorWithErrorCode:(int)a0 scene:(unsigned int)a1;
- (void).cxx_destruct;

@end
