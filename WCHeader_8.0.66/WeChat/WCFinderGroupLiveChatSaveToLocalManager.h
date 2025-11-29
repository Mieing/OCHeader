@class NSString, NSMutableSet, NSObject, WCFinderGroupLiveChatSaveToLocalBaseHandler;
@protocol OS_dispatch_queue;

@interface WCFinderGroupLiveChatSaveToLocalManager : NSObject

@property (retain, nonatomic) NSString *liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSMutableSet *saveDataSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *kQueue;
@property (retain, nonatomic) WCFinderGroupLiveChatSaveToLocalBaseHandler *handler;

- (void)dealloc;
- (id)initWithHandler:(id)a0 liveId:(id)a1;
- (void)reset;
- (void)switchChatRoom:(id)a0;
- (void)clearHistoryChat;
- (void)saveHistoryChat:(id)a0 filePath:(id)a1;
- (void)saveLastBufferDict:(id)a0 filePath:(id)a1;
- (void)loadLastBufferDict:(id /* block */)a0 filePath:(id)a1 roomId:(id)a2;
- (BOOL)checkFileAvailable:(id)a0;
- (void)loadHistoryChat:(id /* block */)a0 filePath:(id)a1 roomId:(id)a2;
- (id)packHistoryModel:(id)a0;
- (id)currentGroupLivePath;
- (void).cxx_destruct;

@end
