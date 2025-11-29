@class NSArray, LLDitoComponentViewModel, NSString, UIView, NSMutableArray, IESLLPOIGoodsDetailElevatorManger;

@interface IESLLPOIGoodsDetailElevatorView : UIView <IESLLPOIGoodsDetailElevatorMangerDelegate>

@property (retain, nonatomic) NSArray *titleTabs;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) NSMutableArray *itemViewArray;
@property (nonatomic) BOOL isFloat;
@property (nonatomic) long long currentSelectedIndex;
@property (weak, nonatomic) LLDitoComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIGoodsDetailElevatorManger *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTitleTabs:(id)a0 viewModel:(id)a1 isFloat:(BOOL)a2;
- (void)updateItemViews;
- (void)updateLine;
- (void)pageViewDidScrollWithOffsetYValue:(id)a0 fromForceUpdate:(BOOL)a1;
- (void)didTouchItemView:(id)a0;
- (void)moveLineWithAnimation;
- (void)moveLine;
- (void)elevatorManger:(id)a0 didScrollToItemWithIndex:(long long)a1 tag:(id)a2 fromForceUpdate:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
