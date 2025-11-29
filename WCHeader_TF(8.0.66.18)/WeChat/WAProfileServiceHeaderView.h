@class WAProfileEasyBuyIconView, GetProfileInfoResponse_RelievedBuyInfo, UILabel, YYLabel;

@interface WAProfileServiceHeaderView : UIView

@property (retain, nonatomic) WAProfileEasyBuyIconView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *buyInfo;
@property (copy, nonatomic) id /* block */ buttonClickAction;

+ (double)viewHeightByBuyInfo:(id)a0;

- (id)initWithButtonClickAction:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
