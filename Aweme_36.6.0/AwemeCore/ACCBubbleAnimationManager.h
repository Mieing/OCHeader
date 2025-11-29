@class NSMutableArray;

@interface ACCBubbleAnimationManager : NSObject

@property (retain, nonatomic) NSMutableArray *animations;

+ (id)sharedManager;

- (id)runAnimationWithBubble:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)runAnimation:(id)a0 completion:(id /* block */)a1;
- (void)removeAnimationsForBubble:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
