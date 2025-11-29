@class ACCEditorBottomEntranceViewConfig, UIImageView, UIView, UILabel, UIButton;

@interface ACCEditorOneClickFilmingButtonView : UIView

@property (nonatomic) BOOL enableHDRRendering;
@property (nonatomic) BOOL enableUIOpt;
@property (retain, nonatomic) UIImageView *iconHDRView;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasChangeMaterials;
@property (readonly, nonatomic) ACCEditorBottomEntranceViewConfig *config;

- (void)updateConfig:(id)a0;
- (void)closeButtonDidClick;
- (void)cancelButtonDidClick;
- (void)configIconWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })closeButtonSize;
- (void)configTitle:(id)a0;
- (void)stopIconLoadingAnimate;
- (void)configIconUrl:(id)a0 placeholder:(id)a1;
- (void)startIconLoadingAnimate;
- (void)configIconUrls:(id)a0 placeholder:(id)a1;
- (void)entranceViewDidClick;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
