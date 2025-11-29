@class AFDIndexView;
@protocol AWECollectionViewSectionIndexDelegate;

@interface AFDWeakProxy : NSObject

@property (weak, nonatomic) AFDIndexView *indexView;
@property (weak, nonatomic) id<AWECollectionViewSectionIndexDelegate> afd_indexViewDelegate;

- (void).cxx_destruct;

@end
