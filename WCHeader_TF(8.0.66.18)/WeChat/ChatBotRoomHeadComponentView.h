@class ChatBotVoIPAIMemberInfo, UIFont, ChatBotTalkingAnimationHeadView, NSString, UILabel;
@protocol ChatBotRoomHeadComponentViewDelegate;

@interface ChatBotRoomHeadComponentView : UIView <ChatBotTalkingAnimationHeadViewDelegate>

@property (retain, nonatomic) ChatBotVoIPAIMemberInfo *memberInfo;
@property (retain, nonatomic) ChatBotTalkingAnimationHeadView *headImageView;
@property (retain, nonatomic) UILabel *nicknamelabel;
@property (nonatomic) struct CGSize { double width; double height; } headImageSize;
@property (retain, nonatomic) UIFont *nicknameFont;
@property (nonatomic) BOOL enableSingleClick;
@property (nonatomic) BOOL isRound;
@property (nonatomic) BOOL blurCircle;
@property (nonatomic) BOOL showNickName;
@property (weak, nonatomic) id<ChatBotRoomHeadComponentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMemberInfo:(id)a0 headImageSize:(struct CGSize { double x0; double x1; })a1 nickNameFont:(id)a2 enableSingleClick:(BOOL)a3;
- (id)initWithMemberInfo:(id)a0 headImageSize:(struct CGSize { double x0; double x1; })a1 nickNameFont:(id)a2 enableSingleClick:(BOOL)a3 isRound:(BOOL)a4 blurCircle:(BOOL)a5 showNickName:(BOOL)a6;
- (id)getNickName;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)layoutHeadImageView;
- (void)applyAiSpeakingInfoEvent;
- (void)setFontColor:(id)a0;
- (void)layoutNickNameLabel;
- (void)onHeadViewSingleClick:(id)a0;
- (void).cxx_destruct;

@end
