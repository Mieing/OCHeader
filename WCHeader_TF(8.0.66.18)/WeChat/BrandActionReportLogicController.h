@class CContact, NSMutableDictionary, NSString, SessionStat, BrandServiceEnterConversationLogic, BrandServiceContinueLocationReportLogic;
@protocol BrandActionReportLogicControllerDelegate;

@interface BrandActionReportLogicController : MMObject <BrandServiceEnterConversationLogicDelegate>

@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) BrandServiceContinueLocationReportLogic *m_continueLocationReporter;
@property (retain, nonatomic) BrandServiceEnterConversationLogic *m_enterConversationLogic;
@property (retain, nonatomic) SessionStat *sessionInfo;
@property (weak, nonatomic) id<BrandActionReportLogicControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)createEnterReportLogic;
- (void)reportEnterConversation;
- (void)reportExitConversation;
- (void)creatContinueReportLogic;
- (void)updateContact:(id)a0;
- (void)resetContinueReportLogic;
- (void)showAlertView;
- (void)setSessionInfo:(id)a0;
- (id)getViewController;
- (void).cxx_destruct;

@end
