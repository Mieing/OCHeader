@interface AWEIMExpandCollectionListModel : AWEIMCollectionListModel

@property (nonatomic) unsigned long long expansion;
@property (nonatomic) long long numberOfObjectsInAll;

- (id)sectionModelAtSection:(long long)a0;
- (long long)numberOfObjectsInSection:(long long)a0;
- (long long)calculateNumberOfObjectsInAll;
- (long long)expandNumberOfSections;
- (long long)expandNumberOfObjectsInAll;
- (id)init;
- (id)objectAtIndexPath:(id)a0;

@end
