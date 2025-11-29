@class NSIndexSet, NSArray, NSDictionary;

@interface AWEListIndexSetResult : NSObject

@property (copy, nonatomic) NSIndexSet *inserts;
@property (copy, nonatomic) NSIndexSet *deletes;
@property (copy, nonatomic) NSIndexSet *updates;
@property (copy, nonatomic) NSArray *moves;
@property (copy, nonatomic) NSDictionary *oldToNewMap;

- (id)initWithInserts:(id)a0 deletes:(id)a1 updates:(id)a2 moves:(id)a3 oldToNewMap:(id)a4;
- (void).cxx_destruct;

@end
