@class IESLiveSelfDisciplinePanelContentView_v2, HTSEventContext, IESLiveSelfDisciplineOpenPanelViewModel, UILabel, UIButton;

@interface IESLiveSelfDisciplineOpenPanelView : UIView

@property (retain, nonatomic) UILabel *panelTitle;
@property (retain, nonatomic) UILabel *panelTitleDesc;
@property (retain, nonatomic) UIButton *descBtn;
@property (retain, nonatomic) UIButton *stopButton;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveSelfDisciplineOpenPanelViewModel *viewModel;
@property (retain, nonatomic) IESLiveSelfDisciplinePanelContentView_v2 *contentView_v2;

- (void)bindViewModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 diContext:(id)a2 trackContext:(id)a3;
- (void)p_makeConfirmButtonAvailable:(BOOL)a0;
- (void)onDescClicked;
- (void)onStopBtnClicked;
- (void)onConfirmBtnClicked;
- (void).cxx_destruct;
- (void)setupViews;

@end
