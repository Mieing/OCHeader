@interface AWENearbyHalfScreenDismissAnimator : NSObject

@property (nonatomic) double delay;

- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (id)init;

@end
