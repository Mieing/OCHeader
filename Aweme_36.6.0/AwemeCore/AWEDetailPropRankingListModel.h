@class NSArray;

@interface AWEDetailPropRankingListModel : AWEDetailCommonDiffableModel

@property (retain, nonatomic) NSArray *rankingCategories;
@property (nonatomic) long long currentIndex;

- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
