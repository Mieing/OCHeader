@class NSArray, UICollectionView;

@interface RxCollectionCompositionalLayoutSolverOptions : NSObject

@property (copy, nonatomic) id /* block */ decorationRegistrationHandler;
@property (retain, nonatomic) NSArray *globalSupplementaryItems;
@property (retain, nonatomic) Class invalidationContextClass;
@property (retain, nonatomic) Class layoutAttributesClass;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) BOOL roundsToScreenScale;
@property (nonatomic) double interSectionSpacing;
@property (weak, nonatomic) UICollectionView *collectionView;

+ (id)defaultOptions;

- (void).cxx_destruct;

@end
