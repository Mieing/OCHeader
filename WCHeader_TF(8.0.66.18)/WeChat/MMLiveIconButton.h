@interface MMLiveIconButton : MMUIButton

@property (nonatomic) double iconPadding;
@property (nonatomic) unsigned long long iconLocation;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
