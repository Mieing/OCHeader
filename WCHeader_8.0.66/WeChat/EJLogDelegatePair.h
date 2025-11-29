@protocol EJNativeLogViewDelegate;

@interface EJLogDelegatePair : NSObject

@property (weak, nonatomic) id<EJNativeLogViewDelegate> delegate;
@property (nonatomic) int referCount;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
