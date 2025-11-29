@class IESLiveVoicePanelButton, NSString, IESLiveVoicePanelViewModel, UIView, UILabel, IESLiveVoiceMsgSendTipView;

@interface IESLiveVoiceCommonPanelView : IESLiveCommentExpandDetailView

@property (retain, nonatomic) IESLiveVoicePanelViewModel *viewModel;
@property (nonatomic) double recordBtnSize;
@property (nonatomic) double recordBtnStaticBgSize;
@property (nonatomic) double recordTopOffset;
@property (retain, nonatomic) IESLiveVoicePanelButton *recordButton;
@property (retain, nonatomic) UIView *recordBtnAnimationBackground;
@property (retain, nonatomic) UIView *recordBtnStaticBackground;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) IESLiveVoiceMsgSendTipView *tipView;
@property (nonatomic) BOOL currentLongpressInside;
@property (retain, nonatomic) NSString *tipLabelText;
@property (retain, nonatomic) NSString *buttonImageName;
@property (retain, nonatomic) NSString *buttonBackgroundColor;

- (void)setupGesture;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)longPressRecordBtn:(id)a0;
- (void)recordBtnDown;
- (void)recordBtnMoveOutside;
- (void)recordBtnMoveInside;
- (void)recordBtnUpInside;
- (void)recordBtnUpOutside;
- (void)recordBtnCancel;
- (void)animationChangeOpacity:(id)a0 hide:(BOOL)a1;
- (void)addBackgroundAnimation;
- (void)removeBackgroundAnimation;
- (void)changeGroupOpacityIsEnd:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
