@class NSMutableSet;

@interface AspectTracker : NSObject

@property (retain, nonatomic) Class trackedClass;
@property (retain, nonatomic) NSMutableSet *selectorNames;
@property (weak, nonatomic) AspectTracker *parentEntry;

- (id)initWithTrackedClass:(Class)a0 parent:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
