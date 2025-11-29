@class UIButton, UILabel, UIView, UITableView;
@protocol IESLiveInteractiveSheetViewModel;

@interface IESLiveInteractiveSheetPanel : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UITableView *contentTabelView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) id<IESLiveInteractiveSheetViewModel> viewModel;

- (void)didSetAttachingDIContext;
- (void)clickCancelButton;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
