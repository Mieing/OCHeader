@class AWEAwemeModel, NSString, UIView;

@interface AWEDCFeedTransitionAnimatorContext : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finishRect;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *animationBackgroundView;
@property (retain, nonatomic) UIView *tipsView;
@property (nonatomic) long long entrance;
@property (retain, nonatomic) AWEAwemeModel *feedAwemeModel;
@property (retain, nonatomic) NSString *leaveMethod;
@property (nonatomic) double enterAnimationViewEndAlpha;
@property (nonatomic) BOOL shouldManualStartEnterAnimation;

- (void).cxx_destruct;

@end
