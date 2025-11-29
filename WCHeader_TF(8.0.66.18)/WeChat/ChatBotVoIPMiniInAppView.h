@class ChatBotVoIPRoomInfo, UIView, NSString, MMHeadImageView, VoIPHeadImageBlurView, UIButton, MMTransparentButton, MMUIButton;
@protocol ChatBotVoIPMiniInAppViewDelegate;

@interface ChatBotVoIPMiniInAppView : UIView <MMTransparentButtonDelegate>

@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMHeadImageView *talkingHeadImageView;
@property (retain, nonatomic) MMTransparentButton *chatBotVoiceInputBtn;
@property (retain, nonatomic) MMUIButton *hangupBtn;
@property (retain, nonatomic) VoIPHeadImageBlurView *remoteHeadImageBlurView;
@property (retain, nonatomic) UIButton *mainButton;
@property (weak, nonatomic) id<ChatBotVoIPMiniInAppViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentViewSize;

- (id)initWithRoomInfo:(id)a0;
- (void)layoutSubviews;
- (void)onMainButtonClick:(id)a0;
- (void)layoutChatBotMainButton;
- (void)layoutContentView;
- (void)layoutChatBotHangupBtn;
- (void)hangup;
- (void)layoutChatBotHeadImageView;
- (void)layoutChatBotHeadImageBlurView;
- (void)layoutChatBotVoiceInputView;
- (id)getInputBtn;
- (void)openMic;
- (void)closeMic;
- (void)initTalkingHeadImageView;
- (void)updateTalkingInfo:(id)a0;
- (void)checkTalkingMember;
- (void)updateTalkingHeadImageViewWithMemberId:(id)a0;
- (void)MMTransparentButton_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)MMTransparentButton_touchesMoved:(id)a0 withEvent:(id)a1;
- (void)MMTransparentButton_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)MMTransparentButton_touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
