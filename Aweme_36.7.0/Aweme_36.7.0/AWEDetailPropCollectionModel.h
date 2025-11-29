@class NSArray;

@interface AWEDetailPropCollectionModel : NSObject <IGListDiffable>

@property (copy, nonatomic) NSArray *propIconURLArray;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithURLArray:(id)a0;
- (void).cxx_destruct;

@end
