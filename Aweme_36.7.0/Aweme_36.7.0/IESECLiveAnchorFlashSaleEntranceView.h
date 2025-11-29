@class IESECLiveAnchorFlashSaleViewModel, UIImageView, UITapGestureRecognizer;

@interface IESECLiveAnchorFlashSaleEntranceView : UIView

@property (retain, nonatomic) IESECLiveAnchorFlashSaleViewModel *viewModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

+ (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
+ (unsigned long long)viewType;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)tapAction;

@end
