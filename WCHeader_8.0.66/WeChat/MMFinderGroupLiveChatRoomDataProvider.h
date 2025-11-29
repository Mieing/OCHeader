@class WCFinderGroupLiveChatSaveToLocalFileHandler, NSArray, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderGroupLiveChatRoomDataProvider : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) WCFinderGroupLiveChatSaveToLocalFileHandler *fileHandler;
@property (retain, nonatomic) NSMutableArray *mutaChatRoomItemCache;
@property (retain, nonatomic) NSArray *chatRoomItemCache;

- (id)initWithLiveId:(id)a0;
- (void)setup;
- (void)addChatRoomItemList:(id)a0;
- (void)clearChatRoomItems;
- (BOOL)isContainChatRoomItemInCache:(id)a0;
- (void)saveToLocal;
- (id)loadRoomBoxIdList;
- (id)finderLiveTaskForTaskId:(id)a0;
- (void).cxx_destruct;

@end
