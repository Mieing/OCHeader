@class UILabel, IESLiveLinkmicToolsIDInfoSettingPanel, NSTimer;

@interface IESLiveLinkmicToolsIDInfoPanel : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *didLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLiveLinkmicToolsIDInfoSettingPanel *settingPanel;
@property (retain, nonatomic) NSTimer *blockTimer;

- (void)tapView:(id)a0;
- (void)setupNoticeCountDownTimer;
- (id)p_buildCommonLabel;
- (void)dragView:(id)a0;
- (void)hideWithClearStorage:(BOOL)a0;
- (void)p_setupUI;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)show;
- (id)nameString;

@end
