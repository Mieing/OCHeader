@class NSArray;

@interface AWEIMCollectionListModel : NSObject

@property (retain, nonatomic) NSArray *sectionModels;

- (id)sectionModelAtSection:(long long)a0;
- (long long)numberOfObjectsInSection:(long long)a0;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(id)a0;

@end
