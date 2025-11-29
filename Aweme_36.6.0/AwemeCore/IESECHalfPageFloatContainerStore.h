@class UIView;
@protocol IESECHalfPageFloatContainerDelegate;

@interface IESECHalfPageFloatContainerStore : NSObject

@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) id<IESECHalfPageFloatContainerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 delegate:(id)a1;

@end
