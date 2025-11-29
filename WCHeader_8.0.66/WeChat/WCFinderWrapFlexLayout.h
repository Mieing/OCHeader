@interface WCFinderWrapFlexLayout : UIView

@property (nonatomic) BOOL isNeedFlexLayout;
@property (nonatomic) double rowGap;
@property (nonatomic) double itemGap;

- (void)didAddSubview:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)_setNeedRelayoutFlex;
- (void)_flexRelayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
