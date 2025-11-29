@class NSMutableArray;

@interface WCBaseDataSource : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *allSectionModelList;

- (id)initWithSectionModel:(id)a0;
- (id)sectionModelAtIndex:(long long)a0;
- (id)sectionModelOfId:(id)a0;
- (long long)indexOfSectionModelForId:(id)a0;
- (long long)indexOfSectionModel:(id)a0;
- (id)cellModelAtIndex:(id)a0;
- (id)indexPathOfCellModel:(id)a0;
- (long long)sectionCount;
- (long long)cellCount;
- (long long)cellCountByIndexPath:(id)a0;
- (void)enumerateCellModel:(id /* block */)a0;
- (BOOL)contains:(id)a0;
- (BOOL)contains:(id)a0 forComparator:(id /* block */)a1;
- (BOOL)addSectionModel:(id)a0;
- (BOOL)safeInsertSectionModel:(id)a0 toIndex:(long long)a1;
- (id)ensureSectionModelById:(id)a0 withTitle:(id)a1;
- (void)setSectionModelList:(id)a0;
- (BOOL)addCellModel:(id)a0 toSectionAtIndex:(long long)a1 createWithId:(id)a2 title:(id)a3;
- (BOOL)addCellModel:(id)a0 toSectionOfId:(id)a1 createWithTitle:(id)a2;
- (BOOL)insertCellModel:(id)a0 atRow:(long long)a1 toSectionAtIndex:(long long)a2 createWithId:(id)a3 title:(id)a4;
- (BOOL)insertCellModel:(id)a0 atRow:(long long)a1 toSectionOfId:(id)a2 title:(id)a3;
- (BOOL)concatDataSourceFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)removeSectionOfId:(id)a0;
- (void)clear;
- (id)describeCount;
- (id)description;
- (id)ensureSectionModelByIndex:(long long)a0 withId:(id)a1 title:(id)a2;
- (id)findSectionModelById:(id)a0;
- (void).cxx_destruct;

@end
