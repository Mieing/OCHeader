@class CreateAIWeAppCard, WAContact, WAAgentResult;

@interface ChatBotVOIPBoardViewWeAppCell : ChatBotVOIPBoardViewCardCell

@property (retain, nonatomic) CreateAIWeAppCard *weAppModel;
@property (retain, nonatomic) WAAgentResult *weAppResult;
@property (retain, nonatomic) WAContact *weAppContact;

- (id)initWithMessage:(id)a0 openScene:(int)a1;
- (void)changeImageViewContent;
- (void)onTapAction;
- (void)handleLongPress:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)menuOption1Tapped;
- (void)menuOption2Tapped;
- (void)openWeApp:(id)a0;
- (void)updateBaseReportDataPB:(id)a0;
- (void).cxx_destruct;

@end
