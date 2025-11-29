@class NSArray, __RxDataSourceSnapshotter;
@protocol RxCollectionViewUpdateTranslating;

@interface RxCollectionCompositionalLayoutSolverUpdate : NSObject

@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) id<RxCollectionViewUpdateTranslating> updateTranslator;
@property (readonly, nonatomic) __RxDataSourceSnapshotter *finalDataSourceSnapshot;

+ (id)solverUpdateWithUpdateItems:(id)a0 updateTranslator:(id)a1 finalDataSourceSnapshot:(id)a2;

- (id)initWithUpdateItems:(id)a0 updateTranslator:(id)a1 finalDataSourceSnapshot:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
