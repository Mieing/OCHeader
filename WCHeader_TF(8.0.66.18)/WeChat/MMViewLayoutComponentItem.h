@class NSHashTable, UIView, NSMutableArray, MMViewLayoutManager;

@interface MMViewLayoutComponentItem : NSObject

@property (nonatomic) unsigned int layoutPriority;
@property (nonatomic) BOOL duringLayout;
@property (retain, nonatomic) NSHashTable *weakChildren;
@property (retain, nonatomic) NSHashTable *weakChildrenThatAreAlsoParents;
@property (retain, nonatomic) NSHashTable *weakParents;
@property (retain, nonatomic) NSHashTable *visitedParentsDuringDescendencyCheck;
@property (weak, nonatomic) MMViewLayoutManager *layoutMgr;
@property (retain, nonatomic) NSMutableArray *bindedLayoutCallbacks;
@property (nonatomic) long long type;
@property (weak, nonatomic) UIView *view;

- (id)init;
- (BOOL)isDescendentItem:(id)a0 checkFailedSet:(id)a1;
- (void)updateLayoutPriority:(unsigned int)a0 curDepth:(unsigned int)a1;
- (id)getChildrenSet;
- (void).cxx_destruct;

@end
