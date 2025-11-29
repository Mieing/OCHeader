@class UIButton, NSString, IESLiveVoicePanelViewModel, IESLiveVoiceTranslatePanelView, UIScrollView, UIView, IESLiveVoiceMsgSendPanelView;
@protocol IESLiveVoiceFuncPanelViewDelegate;

@interface IESLiveVoiceFuncPanelView : IESLiveCommentExpandDetailView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *titleSelectView;
@property (retain, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) IESLiveVoicePanelViewModel *viewModel;
@property (retain, nonatomic) IESLiveVoiceMsgSendPanelView *msgSendPanelView;
@property (retain, nonatomic) UIButton *sendLabel;
@property (retain, nonatomic) IESLiveVoiceTranslatePanelView *voiceTranslatePanel;
@property (retain, nonatomic) UIButton *transLabel;
@property (nonatomic) long long currentVoiceType;
@property (nonatomic) BOOL didSelectDefaultVoiceType;
@property (weak, nonatomic) id<IESLiveVoiceFuncPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)currentActionType;
- (BOOL)supportActionType:(unsigned long long)a0;
- (unsigned long long)detailAreaType;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)clickFuncLabel:(id)a0;
- (void)setupVoiceMsgSendPanel;
- (void)setupVoiceTranslatePanel;
- (void)setAccessibilityLabelWithVoiceType:(long long)a0;
- (void)switchVoiceFuncToType:(long long)a0;
- (void)dismissWithVoiceType:(long long)a0;
- (void)showWithVoiceType:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)layoutSubviews;
- (void)show;
- (void)setupViews;

@end
