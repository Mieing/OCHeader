@class NSIndexSet, NSArray;

@interface WCFinderSectionDiffChangeItem : NSObject

@property (nonatomic) int type;
@property (retain, nonatomic) NSIndexSet *indexSet;
@property (retain, nonatomic) NSArray *itemChanges;

- (id)initWithType:(int)a0 indexSet:(id)a1 itemChange:(id)a2;
- (void).cxx_destruct;

@end
