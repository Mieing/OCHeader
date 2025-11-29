@class AWERLVirtualViewTreeSnapshotNode;

@interface AWERLVirtualViewTreeSnapshot : NSObject

@property (retain, nonatomic) AWERLVirtualViewTreeSnapshotNode *root;

+ (id)buildAnimationTree:(id)a0 to:(id)a1;
+ (id)animationVirtualViewTreeFrom:(id)a0 transitionType:(unsigned long long)a1;
+ (id)merge:(id)a0 to:(id)a1;

- (id)initWithRootVirtualView:(id)a0;
- (void).cxx_destruct;
- (id)build:(id)a0;

@end
