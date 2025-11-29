@class UIButton, MMUILabel, UIView;

@interface MMFinderLivePromoteAddPanel : MMPageSheetBaseView

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long previousOrientation;
@property (copy, nonatomic) id /* block */ addButtonBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;
- (double)contentViewHeight;
- (void)pageSheetDidRotation;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)addButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
