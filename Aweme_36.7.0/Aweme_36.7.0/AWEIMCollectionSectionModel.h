@class NSString, NSArray;

@interface AWEIMCollectionSectionModel : NSObject

@property (copy, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSArray *sectionArray;

- (void).cxx_destruct;
- (id)objectAtIndex:(long long)a0;
- (long long)numberOfObjects;

@end
