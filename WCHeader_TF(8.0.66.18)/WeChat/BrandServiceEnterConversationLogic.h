@class NSMutableDictionary, CContact, SessionStat;
@protocol BrandServiceEnterConversationLogicDelegate;

@interface BrandServiceEnterConversationLogic : MMObject

@property (retain, nonatomic) CContact *m_contact;
@property (nonatomic) long long subscene;
@property (retain, nonatomic) SessionStat *sessionInfo;
@property (weak, nonatomic) id<BrandServiceEnterConversationLogicDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *extInfo;

- (id)init;
- (void)reportEnterConversationForContact:(id)a0;
- (void)handleClickCommandResponse:(id)a0;
- (void)report30451WithMsgStr:(id)a0;
- (id)getClickCommandMsgReportFromLastMsg:(id)a0;
- (void)reportExitConversationForContact;
- (void)addLocalSystemMessage:(id)a0;
- (void)addWuRaoSystemMessageIfNeeded:(id)a0 clickable:(id)a1;
- (void).cxx_destruct;

@end
