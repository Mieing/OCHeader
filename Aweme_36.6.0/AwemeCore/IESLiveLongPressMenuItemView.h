@class IESLiveLongPressMenuItem, UIView;

@interface IESLiveLongPressMenuItemView : UIControl

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESLiveLongPressMenuItem *item;

- (void)setHasSeparatorLine:(BOOL)a0;
- (id)createItemImageView;
- (void).cxx_destruct;
- (id)initWithMenuItem:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
