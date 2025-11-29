@class UILabel, LOTAnimationView, LLDitoGeneralContainerTagItem;

@interface LLDitoGeneralContainerTagItemView : UIView

@property (retain, nonatomic) LLDitoGeneralContainerTagItem *tagItem;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) LOTAnimationView *unselectedLotView;
@property (retain, nonatomic) LOTAnimationView *selectedLotView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)buildSubviews;
- (void)fillData;
- (void)setupSelectedStyle:(BOOL)a0;
- (id)createLotViewWithURLString:(id)a0;
- (id)initWithTagItem:(id)a0 clickBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)tapAction:(id)a0;

@end
