@class NSMutableSet, NSMutableDictionary;

@interface AWEECOMIMReceiveMsgProblemFixUtil : NSObject

@property (retain, nonatomic) NSMutableSet *taskUUIDSet;
@property (nonatomic) long long timeoutMsgCount;
@property (nonatomic) BOOL isShowReceiveMsgProblemAlert;
@property (retain) NSMutableDictionary *longConnectionMessageReceiveMap;
@property (retain, nonatomic) NSMutableSet *hasInsertMsgIdSet;

- (void)dealMessageInsertWithInsertArr:(id)a0;
- (void)dealLongConnectionReceiveMessageWithServerMessageID:(long long)a0 clientMessageID:(id)a1 conversationID:(id)a2 talkID:(id)a3 isInBackground:(BOOL)a4 pageClickUtil:(id)a5;
- (void)dealAppDidEnterBackground;
- (void)dealTimeoutTaskWithUUID:(id)a0;
- (void)dealPullerStart;
- (void)dealPullerFinish;
- (void)addTaskWithUUID:(id)a0;
- (void)removeTaskWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
