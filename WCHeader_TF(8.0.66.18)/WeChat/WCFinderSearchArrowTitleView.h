@class NSString, MMUIButton;

@interface WCFinderSearchArrowTitleView : MMTitleView

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) MMUIButton *titleButton;
@property (nonatomic) BOOL enable;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dynamicDelegate;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (void)doLayout;
- (id)tintColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bodyInsetsInNavigationBar;
- (void).cxx_destruct;

@end
