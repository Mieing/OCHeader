@class NSString, NSMutableDictionary;

@interface IESLiveGiftTouchMessageManager : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *displayPosition2UidMessage;
@property (retain, nonatomic) NSMutableDictionary *displayPosition2UidMessageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)unRegisterMessageNotificationWithUid:(id)a0 displayPositionType:(unsigned long long)a1 messageUpdateBlock:(id /* block */)a2;
- (void)registerMessageNotificationWithUid:(id)a0 displayPositionType:(unsigned long long)a1 messageUpdateBlock:(id /* block */)a2;
- (id)currentGiftTouchMessageWithUid:(id)a0 displayPositionType:(unsigned long long)a1;
- (void)receiveGiftTouchMessage:(id)a0 withDisplayPositionType:(unsigned long long)a1;
- (id)getUidToMessageDicWithDisplayPosition:(unsigned long long)a0;
- (id)getUidToMessageBlockArrWithDisplayPosition:(unsigned long long)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
