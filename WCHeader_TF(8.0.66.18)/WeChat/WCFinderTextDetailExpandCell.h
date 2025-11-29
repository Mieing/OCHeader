@class UIButton, _WCFinderTextDetailSection;
@protocol WCFinderTextDetailItemDelegate;

@interface WCFinderTextDetailExpandCell : UICollectionViewCell

@property (weak, nonatomic) id<WCFinderTextDetailItemDelegate> delegate;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) _WCFinderTextDetailSection *section;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClickExpand;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;

@end
