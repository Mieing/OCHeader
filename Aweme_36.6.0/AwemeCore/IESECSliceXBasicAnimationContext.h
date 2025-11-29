@class IESECSliceXBaseElementView;

@interface IESECSliceXBasicAnimationContext : NSObject

@property (nonatomic) long long state;
@property (weak, nonatomic) IESECSliceXBaseElementView *animatingElementView;
@property (nonatomic) double beginTime;
@property (nonatomic) BOOL startBlockHasCalled;

- (void).cxx_destruct;

@end
