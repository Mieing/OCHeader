@class UIStackView, UIView, CMessageWrap, MMHeadImageView, NSString, UIImageView, ChatBotReCommendMsgView, MMUILabel, MMUIButton;

@interface ChatBotVoIPAskAIAsstTalkingView : ChatBotVoIPTalkingView <MMImageLoaderObserver, ChatBotReCommendMsgViewDelegate>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) MMUILabel *asstNameLabel;
@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) UIStackView *topStackView;
@property (retain, nonatomic) MMUILabel *topicLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) ChatBotReCommendMsgView *recommendMsgView;
@property (retain, nonatomic) CMessageWrap *transferMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentViews;
- (void)layoutBackgroud;
- (void)layoutCloseBtn;
- (void)layoutHeadImageView;
- (void)layoutTopStackView;
- (void)layoutTopicLabel;
- (void)layoutBoardView;
- (id)transferCMessageWrapToTopic:(id)a0;
- (void)layoutBottomPanel;
- (void)updateHeadImgWithUrl:(id)a0;
- (void)layoutRecommendMsgView;
- (void)modifySideInfoWhenSendWelcome:(id)a0;
- (void)openMic;
- (void)tryHideRecommendMsgView;
- (void)onRecvStreamText:(id)a0 textSeq:(int)a1;
- (void)openTextInputMode;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)onClickRecommendMsg:(id)a0;
- (void)onRecvRecommendMsgInfo:(id)a0;
- (void).cxx_destruct;

@end
