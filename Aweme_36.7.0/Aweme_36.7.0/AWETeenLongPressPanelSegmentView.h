@class NSArray, UIButton, UIView;
@protocol AWETeenLongPressPanelSegmentViewDelegate;

@interface AWETeenLongPressPanelSegmentView : UIView

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *btnBackView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIButton *seletedBtn;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWETeenLongPressPanelSegmentViewDelegate> delegate;

- (void)setDefaultSelectIndex:(long long)a0;
- (void)btnDidClick:(id)a0;
- (void)btnClick:(id)a0 isUserAction:(BOOL)a1;
- (struct CGSize { double x0; double x1; })animationViewSize;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (id)initWithItems:(id)a0 delegate:(id)a1;
- (double)titleLabelFontSize;

@end
