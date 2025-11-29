@class UIView, CMessageWrap;

@interface ChatBotPrologueMsgHistoryThinkCell : ChatBotPrologueMsgBaseCell

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) UIView *msgCard;

- (void)prepareForReuse;
- (void)setupUI;
- (void)layoutMsgCard;
- (id)getMsgCardTitle;
- (id)getMsgCardDesc;
- (id)getMsgCardLogoName;
- (id)getMsgCardImageView;
- (id)msgCardSourceName;
- (void)onTapAction;
- (void)viewLinkMsg;
- (void)jumpWebView:(id)a0 nsUrl:(id)a1 nsRawUrl:(id)a2;
- (void)viewFinderMsg;
- (void).cxx_destruct;

@end
