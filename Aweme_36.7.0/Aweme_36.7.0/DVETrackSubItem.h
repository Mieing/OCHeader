@class NSArray;

@interface DVETrackSubItem : NSObject <IGListDiffable>

@property (retain, nonatomic) NSArray *nodes;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNodes:(id)a0;

@end
