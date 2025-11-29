@class NSString, NSMutableArray;

@interface WCFinderBaseSectionModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSMutableArray *allCellModelList;

- (id)initWithId:(id)a0 sectionTitle:(id)a1;
- (id)cellModelAtRow:(long long)a0;
- (long long)rowOfCellModel:(id)a0;
- (long long)cellCount;
- (void)enumerateCellModel:(id /* block */)a0;
- (BOOL)contains:(id)a0;
- (BOOL)contains:(id)a0 forComparator:(id /* block */)a1;
- (void)setCellModelList:(id)a0;
- (BOOL)addCellModel:(id)a0;
- (BOOL)insertCellModel:(id)a0 atRow:(long long)a1;
- (BOOL)removeCellModelAtRow:(long long)a0;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
