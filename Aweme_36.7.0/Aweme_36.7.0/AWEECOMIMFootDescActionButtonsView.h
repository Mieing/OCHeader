@class NSArray, UIStackView;

@interface AWEECOMIMFootDescActionButtonsView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) NSArray *itemButtonList;
@property (copy, nonatomic) id /* block */ didClickItemBlock;

- (void)handleClickItemButton:(id)a0;
- (void)updateWithActionItemList:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
