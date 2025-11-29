@class IESECOrderListTabUIConfigModel, NSArray, UIImageView, IESECOrderListTabButton, UIScrollView, UIView, NSString;
@protocol IESECOrderListTabViewDelegate;

@interface IESECOrderListTabView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *shadowView;
@property (weak, nonatomic) id<IESECOrderListTabViewDelegate> delegate;
@property (readonly, nonatomic) IESECOrderListTabButton *fixedButton;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *indicatorView;
@property (readonly, nonatomic) NSArray *buttonList;
@property (readonly, nonatomic) IESECOrderListTabUIConfigModel *uiConfig;
@property (readonly, nonatomic) unsigned long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)indicatorWidth;
- (void)updateScrollOffsetX:(double)a0 withState:(long long)a1;
- (void)seletcTabWithTabID:(long long)a0;
- (void)slideToSelectButtonWithIndex:(long long)a0;
- (void)updateIndicatorUI;
- (void)calculateIndicatorFrame;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1 triggerDelegate:(BOOL)a2 isSlide:(BOOL)a3;
- (void)updateDataWithItemList:(id)a0 uiConfig:(id)a1 fontUtil:(id)a2;
- (void)selectButton:(id)a0 isSlide:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)buttonAction:(id)a0;

@end
