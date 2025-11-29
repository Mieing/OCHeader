@class NSDictionary;

@interface AWETheaterMoreDislikeViewController : AWEDoubleColumnDislikeViewController

@property (retain, nonatomic) NSDictionary *logExtra;

+ (void)showDislikeVCWithLocation:(struct CGPoint { double x0; double x1; })a0 moreSectionItem:(id)a1 logExtraDict:(id)a2 cellLogExtra:(id)a3 senderVC:(id)a4 feedbackBlock:(id /* block */)a5 afterDismissFeedbackBlock:(id /* block */)a6;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (Class)collectionViewCellClass;
- (Class)headerClass;

@end
