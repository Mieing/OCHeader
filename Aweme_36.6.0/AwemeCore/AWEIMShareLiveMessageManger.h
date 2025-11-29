@class NSString, AWEIMShareLiveMessageActionCreator, NSHashTable, NSNumber;

@interface AWEIMShareLiveMessageManger : NSObject <AWELiveCommonMessageProtocol>

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) AWEIMShareLiveMessageActionCreator *messageActionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uninstallMessageChannel;
- (void)installCommonMessageWithRoomID:(id)a0;
- (void)addCommonMessageubscrber:(id)a0;
- (void)removeCommonMessageSubscrber:(id)a0;
- (void)startMessageIfNeed;
- (void)loadNewMessageActionCreator;
- (void)enumerate:(id)a0 sendMessage:(id)a1 withDict:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dispatchMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end
