@interface ChatBotVOIPBoardViewURLCell : ChatBotVOIPBoardViewCardCell <IMsgExt>

- (id)initWithMessage:(id)a0 openScene:(int)a1;
- (void)changeImageViewContent;
- (void)onTapAction;
- (void)viewLinkMsg;
- (void)jumpWebView:(id)a0 nsUrl:(id)a1 nsRawUrl:(id)a2;
- (void)OnMsgDownloadThumbOK:(id)a0 MsgWrap:(id)a1;
- (void)setForwardThumbData:(id)a0;
- (void)updateBaseReportDataPB:(id)a0;

@end
