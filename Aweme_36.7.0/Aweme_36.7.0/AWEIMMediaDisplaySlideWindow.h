@protocol AWEIMMediaDisplaySlideWindowDelegate;

@interface AWEIMMediaDisplaySlideWindow : NSObject

@property (nonatomic) long long left;
@property (nonatomic) long long right;
@property (nonatomic) long long min;
@property (nonatomic) long long max;
@property (readonly, nonatomic) long long total;
@property (weak, nonatomic) id<AWEIMMediaDisplaySlideWindowDelegate> delegate;
@property (nonatomic) long long current;

- (id)initWithTotal:(long long)a0 firstPosition:(long long)a1 delegate:(id)a2;
- (void)p_initialWindowPosition:(long long)a0;
- (void)p_moveLeft;
- (void)p_moveRight;
- (long long)rightMostIndex;
- (void)p_moveSlideWindowIfNeeded:(long long)a0 right:(long long)a1;
- (void)p_slideWindowDidMoved;
- (void).cxx_destruct;
- (id)debugDescription;

@end
