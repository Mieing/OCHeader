@class ChatBotBlurButton;
@protocol ChatBotVoIPModeSelectViewDelegate;

@interface ChatBotVoIPModeSelectView : UIView

@property (nonatomic) unsigned int modeSet;
@property (retain, nonatomic) ChatBotBlurButton *listenToMeBtn;
@property (retain, nonatomic) ChatBotBlurButton *chatWithMeBtn;
@property (retain, nonatomic) ChatBotBlurButton *talkSomeNewsBtn;
@property (weak, nonatomic) id<ChatBotVoIPModeSelectViewDelegate> delegate;

- (id)initWithModeBitSet:(unsigned int)a0;
- (void)layoutSubviews;
- (void)layoutSelectBtns;
- (void)onSelectBtnClick:(id)a0;
- (void).cxx_destruct;

@end
