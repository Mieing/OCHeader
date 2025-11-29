@class NSArray, UIButton, UIView;

@interface AWEModernLongPressPanelSpeedSegmentView : AWELongPressPanelSegmentView

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *btnBackView;
@property (retain, nonatomic) UIButton *selectedBtn;
@property (nonatomic) long long selectedIndex;

- (void)setDefaultSelectIndex:(long long)a0;
- (void)btnDidClick:(id)a0;
- (void)btnClick:(id)a0 isUserAction:(BOOL)a1;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (id)initWithItems:(id)a0 delegate:(id)a1;

@end
