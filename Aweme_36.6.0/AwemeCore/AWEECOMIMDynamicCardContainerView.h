@class UIView;

@interface AWEECOMIMDynamicCardContainerView : UIView

@property (retain, nonatomic) UIView *bkgView;
@property (copy, nonatomic) id /* block */ onContainerViewClick;
@property (copy, nonatomic) id /* block */ onContainerViewClickV2;
@property (copy, nonatomic) id /* block */ heightChangeCallback;
@property (copy, nonatomic) id /* block */ fetchAndReloadCallback;
@property (copy, nonatomic) id /* block */ reloadCallback;

+ (double)cardContainerViewHeightWithModelArr:(id)a0 cardWidth:(double)a1;
+ (double)childWidthElementModel:(id)a0 defaultWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })cardContainerViewSizeWithModelArr:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void)updateContainerViewWithModelArr:(id)a0;
- (id)clickableResourceList;
- (void)p_onContainerViewWithActionModel:(id)a0 contextDict:(id)a1 clickUUID:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
