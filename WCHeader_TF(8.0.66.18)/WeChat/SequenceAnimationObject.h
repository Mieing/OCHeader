@class NSMutableArray;

@interface SequenceAnimationObject : NSObject

@property (nonatomic) BOOL m_isAnimating;
@property (retain, nonatomic) NSMutableArray *m_animations;
@property unsigned long long maxCount;

- (id)init;
- (void)addAnimationWithDuration:(double)a0 delay:(double)a1 options:(unsigned long long)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
- (void)checkMaxCount;
- (void)doNextAnimation;
- (void).cxx_destruct;

@end
