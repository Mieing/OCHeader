@class ChatBotVoIPAIMemberInfo, ChatBotAnimatedWaveView, UIImageView, NSString, MMHeadImageView;
@protocol ChatBotTalkingAnimationHeadViewDelegate;

@interface ChatBotTalkingAnimationHeadView : UIView <MultiTalkMemberExt, IChatBotVoIPExt, MMImageLoaderObserver>

@property (nonatomic) BOOL isRound;
@property (nonatomic) BOOL blurCircle;
@property (retain, nonatomic) ChatBotVoIPAIMemberInfo *memberInfo;
@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) ChatBotAnimatedWaveView *waveView;
@property (retain, nonatomic) UIImageView *blurredImageView;
@property (nonatomic) BOOL enableSingleClick;
@property (weak, nonatomic) id<ChatBotTalkingAnimationHeadViewDelegate> delegate;
@property (readonly, nonatomic) NSString *chatBotIdentifier;
@property (nonatomic) BOOL applyAiSpeakingInfoEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMemberInfo:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMemberInfo:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isRound:(BOOL)a2 blurCircle:(BOOL)a3;
- (void)initViews;
- (void)initHeadView;
- (void)setupBlurredImageView;
- (id)cropCenterOfImage:(id)a0 scale:(double)a1;
- (id)blurImage:(id)a0 radius:(double)a1;
- (id)createRingMaskWithSize:(struct CGSize { double x0; double x1; })a0 ringWidth:(double)a1;
- (void)updateHeadImage:(id)a0;
- (void)updateHeadImgWithUrl:(id)a0;
- (void)initWaveView;
- (void)setWaveExtendWidth:(double)a0;
- (void)layoutSubviews;
- (void)enableSingleClick:(BOOL)a0;
- (void)onSingleClick;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)onMultiTalkMemberTalking;
- (void)onMultiTalkMemberSilent;
- (void)onUpdateAITAlkingStatusWithTalkingMembers:(id)a0;
- (void)onRecvAiSpeakingInfo:(id)a0;
- (void).cxx_destruct;

@end
