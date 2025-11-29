@class UIButton, UIImageView, UIView, MMUIButton, MMUILabel;

@interface MMFinderScreenRecordGuideView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)cancelClick;
- (void)actionClick;
- (void)detailClick;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetDidDismiss;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void).cxx_destruct;

@end
