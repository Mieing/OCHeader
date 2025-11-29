@interface AWEIMSwipeTools : NSObject

+ (void)hideSwipeablesForCollectionView:(id)a0;
+ (BOOL)enableTableViewSwipeFunction;
+ (BOOL)enableCollectionViewSwipeFunction;
+ (void)hideSwipeablesForScrollView:(id)a0;
+ (id)swipeablesForScrollView:(id)a0;
+ (double)defaultElasticTranslationRatio;
+ (struct CGPoint { double x0; double x1; })elasticTranslationForGesture:(id)a0 inView:(id)a1 withLimit:(struct CGSize { double x0; double x1; })a2 fromOriginalCenter:(struct CGPoint { double x0; double x1; })a3 applyingRatio:(double)a4;
+ (void)hideSwipeable:(id)a0;
+ (id)swipeablesForTableView:(id)a0;
+ (id)swipeablesForCollectionView:(id)a0;
+ (void)hideSwipeablesForTableView:(id)a0;

@end
