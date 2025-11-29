@class NSArray;

@interface FTSTopHitsSectionController : FTSBaseSectionController

@property (retain, nonatomic) NSArray *topHitItems;

- (void)didUpdateWithModel:(id)a0;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (long long)numberOfSearchItems;
- (unsigned long long)maxDisplayItemsCount;
- (id)sectionTitle;
- (unsigned long long)sectionType;
- (void).cxx_destruct;

@end
