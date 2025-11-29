@class NSString, NSMutableDictionary, NSMapTable, NSTimer, NSArray;

@interface AWEIMInputStateReceiver : NSObject <IESIMP2PMessageStreamListener>

@property (retain, nonatomic) NSMutableDictionary *inputStateCache;
@property (retain, nonatomic) NSMutableDictionary *inputStateBlocks;
@property (retain, nonatomic) NSMutableDictionary *conversationID2PeerUserIDCache;
@property (retain, nonatomic) NSMutableDictionary *secUID2PeerUserIDCache;
@property (retain, nonatomic) NSMapTable *convID2Conversation;
@property (retain, nonatomic) NSString *messageChangeObserverToken;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isStart;
@property (nonatomic) double interval;
@property (copy, nonatomic) NSArray *partInclusiveArray;
@property (copy, nonatomic) NSArray *partExclusiveArray;
@property (nonatomic) unsigned long long currentselectCellStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorInputStateWithconversationID:(id)a0 secPeerUid:(id)a1 peerUid:(id)a2 conversation:(id)a3 type:(long long)a4 completion:(id /* block */)a5;
+ (void)monitorInputStateWithconversationID:(id)a0 secPeerUid:(id)a1 peerUid:(id)a2 type:(long long)a3 completion:(id /* block */)a4;
+ (void)cancelMonitorInputStateWithconversationID:(id)a0 type:(long long)a1;
+ (void)cancelAllMonitorInputState;
+ (id)getInputStateCacheWithConversationID:(id)a0;
+ (void)refreshCurrentObserver;
+ (id)sharedInstance;

- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)readLastOnlinePrivacyDataFromDisk;
- (void)__didReceiveP2PMessage:(id)a0;
- (BOOL)canCacheInputStateWithMessage:(id)a0;
- (void)__dealWithInputState;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)start;
- (void)cleanTimer;
- (void)resume;
- (void)dealloc;

@end
