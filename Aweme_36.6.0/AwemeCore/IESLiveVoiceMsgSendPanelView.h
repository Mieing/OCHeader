@interface IESLiveVoiceMsgSendPanelView : IESLiveVoiceCommonPanelView

- (void)setupViewModel;
- (void)showTipView;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
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
- (void)updateRecordBtnLayout;
- (void)recordDone;

@end
