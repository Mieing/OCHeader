@class NSString, ChatBotVoIPReportData, CMessageWrap, ChatBotVoIPReportDataPB, AIMessageWrapInfo;

@interface ChatBotVOIPBoardViewBaseCell : UITableViewCell <ChatBotVOIPBoardViewDelegate>

@property (retain, nonatomic) AIMessageWrapInfo *msgInfo;
@property (retain, nonatomic) CMessageWrap *oMessageWrap;
@property (retain, nonatomic) ChatBotVoIPReportData *reportData;
@property (retain, nonatomic) ChatBotVoIPReportDataPB *baseReportDataPB;
@property (copy, nonatomic) id /* block */ notifyBlock;
@property (nonatomic) int openScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)setupViewWithWidth:(double)a0;
- (id)initWithMessage:(id)a0 openScene:(int)a1;
- (void)onTapSendToMe;
- (void)makeCardWithTitle:(id)a0 subTitle:(id)a1;
- (void)updateReportData:(id)a0;
- (void)updateBaseReportDataPB:(id)a0;
- (void).cxx_destruct;

@end
