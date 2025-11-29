@class NSIndexSet, NSArray;

@interface DolphinIndexSetResult : NSObject

@property (copy, nonatomic) NSIndexSet *inserts;
@property (copy, nonatomic) NSIndexSet *deletes;
@property (copy, nonatomic) NSArray *moves;

- (void).cxx_destruct;

@end
