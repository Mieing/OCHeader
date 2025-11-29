@class UIImageView, AWEEcommerceSearchStyleLabel, AWEEcommerceSearchCommonTagModel;

@interface AWEEcommerceSearchTagView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) AWEEcommerceSearchStyleLabel *textView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *tagModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
