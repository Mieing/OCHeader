@class RxScheduler, NSMutableDictionary, NSMutableArray;
@protocol RTVXRRoomManagerInterface, RxInjector;

@interface RTVXRRoomMessageRTMFallbackSender : NSObject

@property (readonly, nonatomic) NSMutableDictionary *pendingMessageSendMapper;
@property (readonly, nonatomic) NSMutableArray *pendingMessageSendQueue;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) BOOL isRunning;
@property (readonly, nonatomic) id<RTVXRRoomManagerInterface> roomManager;

- (void)rxAwakeFromPropertyInjection;
- (void)__execute;
- (id)sendMessage:(id)a0 roomID:(id)a1 toUserIDs:(id)a2;
- (void).cxx_destruct;

@end
