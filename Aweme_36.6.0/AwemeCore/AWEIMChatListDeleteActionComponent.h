@class NSString, NSMutableArray, NSMutableSet;
@protocol AWEIMMessageDataProtocol;

@interface AWEIMChatListDeleteActionComponent : AWEIMComponentBase <AWEIMChatListDeleteActionProtocol>

@property (retain, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (retain, nonatomic) NSMutableArray *messages;
@property (nonatomic) BOOL isFirstLoad;
@property (retain, nonatomic) NSMutableSet *messageIDSets;
@property (copy, nonatomic) id /* block */ fetchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)fetchHistoryMessageWithSessionID:(id)a0 messageTypeFilter:(id)a1 dateLimit:(double)a2 completionBlock:(id /* block */)a3;
- (void)filterMessagesWithMessageType:(id)a0 dateLimit:(double)a1;
- (BOOL)isEffectiveMessage:(id)a0;
- (BOOL)isRedPacketEndedWithMessage:(id)a0;
- (BOOL)isTransferMessageEndedWithMessage:(id)a0;
- (unsigned long long)originalTransferMoneyMessageStatusWithMessage:(id)a0;
- (void).cxx_destruct;

@end
