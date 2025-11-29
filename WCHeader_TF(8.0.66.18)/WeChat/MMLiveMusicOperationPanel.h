@class MMUIButton, UILabel, UIView;
@protocol MMLiveMusicOperationPanelDelegate;

@interface MMLiveMusicOperationPanel : UIView

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) MMUIButton *bgMusicButton;
@property (retain, nonatomic) UILabel *bgMusicLabel;
@property (retain, nonatomic) UILabel *bgMusicGuideLabel;
@property (retain, nonatomic) MMUIButton *singButton;
@property (retain, nonatomic) UILabel *singLabel;
@property (retain, nonatomic) UILabel *singGuideLabel;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) MMUIButton *backgroundExitButton;
@property (weak, nonatomic) id<MMLiveMusicOperationPanelDelegate> delegate;

- (void)layoutSubviews;
- (void)showPanel;
- (void)setSubPathWithTitle:(id)a0 selection:(unsigned long long)a1;
- (void)onTapNotPanelArea;
- (void)closeWithSelection:(unsigned long long)a0;
- (void)onClickBGMusicButton;
- (void)onClickSingButton;
- (id)createDescLabelWithText:(id)a0;
- (void).cxx_destruct;

@end
