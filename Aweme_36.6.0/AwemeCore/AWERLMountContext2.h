@class AWERLMountIntrospection2, AWERLViewReusePoolManager;
@protocol AWERLAnimationProtocol;

@interface AWERLMountContext2 : NSObject

@property (retain, nonatomic) AWERLViewReusePoolManager *viewManager;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) AWERLMountIntrospection2 *introspection;
@property (nonatomic) unsigned long long transitionType;
@property (retain, nonatomic) id<AWERLAnimationProtocol> animation;

- (id)initWithContainerView:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)contextWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
