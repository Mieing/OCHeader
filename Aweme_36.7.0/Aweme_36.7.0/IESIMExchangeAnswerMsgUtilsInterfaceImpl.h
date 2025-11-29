@class NSString;

@interface IESIMExchangeAnswerMsgUtilsInterfaceImpl : NSObject <IESIMExchangeAnswerMsgUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (long long)getExchangeIndexWith:(id)a0;
- (void)updateConversationExchangeIndexWith:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)transferWithExchangeAnswerMessage:(id)a0 messageSender:(id)a1 messageReceiver:(id)a2 conversation:(id)a3 entrance:(id)a4 enterFrom:(id)a5 enterMethod:(id)a6 showSharePanel:(BOOL)a7;
- (BOOL)isTopVCExchangeAnswer;
- (BOOL)shouldShowExchangeAnswerEntryForPeerSecUid:(id)a0;
- (void)startExchangeAnswerWithMessageReceiver:(id)a0 entrance:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 questionBank:(id)a4;
- (void)startExchangeAnswerWithConversation:(id)a0 entrance:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 questionBank:(id)a4;
- (BOOL)shouldShowExchangeAnswerEntrance;

@end
