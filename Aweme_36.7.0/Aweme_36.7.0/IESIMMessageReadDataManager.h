@class TIMXOMessageReadReceipt, NSString;

@interface IESIMMessageReadDataManager : NSObject <IESIMTIMXLifeMessage, IESIMMessageReadDataManagerProtocol>

@property (retain) TIMXOMessageReadReceipt *readReceipt;
@property (retain, nonatomic) id readReceiptCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ conversationReadReceiptUpdatedFromPushBlock;
@property (copy, nonatomic) NSString *conversationID;

- (id)initWithConversationId:(id)a0;
- (void)cancelReloadReadReceiptWithToken:(id)a0;
- (id)reloadReadReceiptForMessage:(id)a0 syncFromServer:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
