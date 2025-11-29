@class UIView, MMBGMPanelPublishContext, MMBGMSelectedBottomViewModel, MMUIButton, MMBGMSelectedConfig;
@protocol MMBGMSelectedBottomViewDelegate;

@interface MMBGMSelectedBottomView : MMUIView

@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (retain, nonatomic) MMUIButton *musicOnButton;
@property (retain, nonatomic) MMUIButton *ostOnButton;
@property (retain, nonatomic) MMUIButton *lyricOnButton;
@property (retain, nonatomic) MMBGMSelectedBottomViewModel *viewModel;
@property (nonatomic) BOOL notCallDelegateOnManualSetMusicButton;
@property (retain, nonatomic) UIView *seperator;
@property (weak, nonatomic) id<MMBGMSelectedBottomViewDelegate> delegate;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupWithConfig:(id)a0;
- (BOOL)isMusicOn;
- (BOOL)isLyricOn;
- (BOOL)isOriginSoundSelected;
- (void)manualSetMusicOn:(BOOL)a0;
- (void)manualSetOstOn:(BOOL)a0;
- (void)manualSetLyricOn:(BOOL)a0;
- (void)layoutSubviews;
- (id)genBtn;
- (id)genReportDictWithBtn:(id)a0;
- (id)genReportDict;
- (void)onClickMusicOnBtn:(id)a0;
- (void)onClickOstOnBtn:(id)a0;
- (void)onClickLyricOnBtn:(id)a0;
- (void).cxx_destruct;

@end
