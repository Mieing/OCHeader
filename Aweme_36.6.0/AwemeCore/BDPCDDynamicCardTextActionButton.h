@class BDPCDDynamicCardTextActionButtonModel;

@interface BDPCDDynamicCardTextActionButton : UIButton

@property (retain, nonatomic) BDPCDDynamicCardTextActionButtonModel *model;

+ (id)actionButtonWithButtonModel:(id)a0;

- (void)bindItemModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
