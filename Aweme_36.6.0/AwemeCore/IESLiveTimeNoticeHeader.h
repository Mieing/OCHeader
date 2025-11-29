@class UIButton, UILabel, IESLiveTimeNoticeViewModel;

@interface IESLiveTimeNoticeHeader : UIView

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) IESLiveTimeNoticeViewModel *viewModel;

- (void)setupheader;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
