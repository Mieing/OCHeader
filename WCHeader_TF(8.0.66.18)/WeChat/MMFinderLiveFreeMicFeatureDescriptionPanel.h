@class UILabel, UIButton, UIView;

@interface MMFinderLiveFreeMicFeatureDescriptionPanel : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dotLabel1;
@property (retain, nonatomic) UILabel *dotLabel2;
@property (retain, nonatomic) UILabel *tipLabel1;
@property (retain, nonatomic) UILabel *tipLabel2;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ freeMicFeatureDescriptionPanelDidCloseBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)onClickConfirmButton:(id)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
