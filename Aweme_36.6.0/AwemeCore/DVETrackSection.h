@class NSArray, NSString;

@interface DVETrackSection : NSObject <IGListDiffable>

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *UUID;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
