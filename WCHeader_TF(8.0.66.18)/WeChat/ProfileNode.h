@class NSMutableSet, CallFrame;

@interface ProfileNode : NSObject

@property (nonatomic) int ID;
@property (retain, nonatomic) CallFrame *callFrame;
@property (nonatomic) int hitCount;
@property (retain, nonatomic) NSMutableSet *children;
@property (nonatomic) BOOL hasParent;
@property (nonatomic) BOOL visited;

- (id)init;
- (void).cxx_destruct;

@end
