@protocol IESECSKUSkeletonViewDelegate;

@interface IESECSKUSkeletonView : UIView

@property (weak, nonatomic) id<IESECSKUSkeletonViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupUI;

@end
