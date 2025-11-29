@class UIViewController;
@protocol AWETransitionContextProvider;

@interface AWETransitionContext : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long interaction;
@property (nonatomic) unsigned long long triggerDirection;
@property (nonatomic) unsigned long long pinchZoomType;
@property (nonatomic) struct CGPoint { double x; double y; } currentPanLocation;
@property (nonatomic) double percentCompleteForPercentageDriven;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) UIViewController *toViewController;
@property (retain, nonatomic) id fromContextProvider;
@property (retain, nonatomic) id toContextProvider;
@property (retain, nonatomic) id<AWETransitionContextProvider> contextProvider;

- (void).cxx_destruct;

@end
