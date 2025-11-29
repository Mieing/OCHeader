@class IESLiveEmptyViewConfig, UIImageView, UIView, UILabel, UIButton;

@interface IESLiveAdminNewEmptyView : UIView

@property (retain, nonatomic) IESLiveEmptyViewConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UILabel *remindLabel;
@property (retain, nonatomic) UILabel *auxiliaryLabel;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double height;

- (void)updateConfig:(id)a0;
- (struct CGSize { double x0; double x1; })containerViewSize;
- (struct CGSize { double x0; double x1; })getViewSize;
- (void)layoutButton:(id)a0;
- (double)p_renderUI;
- (void)layoutPlaceholderImageView;
- (void)layoutRemindLabel:(id)a0;
- (void)layoutAuxiliaryLabel:(id)a0 withTopOffset:(long long)a1;
- (void)onButtonCliced;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end
