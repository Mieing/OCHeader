@class AWETriangleView, UIImageView, UIView, UILabel, UIButton;

@interface AWEDynamicTemplateApplyPopover : UIView

@property (retain, nonatomic) AWETriangleView *triangleView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (copy, nonatomic) id /* block */ cancelBlk;

- (void)didClickCancel;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (id)initWithCancelBlk:(id /* block */)a0;
- (void)showOnView:(id)a0 targetView:(id)a1;
- (void)autoDismiss:(double)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupUI;

@end
