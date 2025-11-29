@class UILabel, MMLiveBeautyItemGroup;
@protocol MMLiveBeautyItemGroupTabViewDelegate;

@interface MMLiveBeautyItemGroupTabView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMLiveBeautyItemGroup *itemGroup;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) id<MMLiveBeautyItemGroupTabViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onTapped;
- (void).cxx_destruct;

@end
