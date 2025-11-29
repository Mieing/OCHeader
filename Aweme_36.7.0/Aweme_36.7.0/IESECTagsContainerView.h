@class UIStackView;

@interface IESECTagsContainerView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double tagSpacing;

- (void)addTagView:(id)a0;
- (void)setupWithTagViews:(id)a0;
- (id)initWithTagViews:(id)a0;
- (id)tagViews;
- (void)removeTagView:(id)a0;
- (void)removeAllTagViews;
- (void)insertTagView:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
