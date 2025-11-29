@class IESECSliceXListElementView, IESECSliceXBaseView, IESECSliceXBaseElementView, NSHashTable, NSIndexPath;

@interface IESECSliceXListElementViewCell : UICollectionViewCell

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) IESECSliceXListElementView *parentListElementView;
@property (retain, nonatomic) IESECSliceXBaseElementView *elementView;
@property (retain, nonatomic) IESECSliceXBaseView *baseView;
@property (retain, nonatomic) NSHashTable *innerImageViewRefs;

+ (id)reuseIdentifierForElement:(id)a0;
+ (void)initialize;

- (void)updateWithElement:(id)a0 context:(id)a1 currIndexPath:(id)a2 atParentListElementView:(id)a3;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;

@end
