@class CAAnimationGroup, NSString, UIView;

@interface IESLLTempoAnimationContext : NSObject

@property (nonatomic) long long state;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) CAAnimationGroup *animationGroup;
@property (retain, nonatomic) CAAnimationGroup *animationGroupCopy;
@property (copy, nonatomic) NSString *animationName;
@property (nonatomic) BOOL isFinished;

- (void).cxx_destruct;

@end
