@class NSString, UIView;

@interface MsgImgFullScreenMinimizeTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) double maskAlpha;
@property (weak, nonatomic) UIView *animateContentView;
@property (nonatomic) unsigned long long transitionStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationTargetRect;
@property (retain, nonatomic) NSString *taskBizName;
@property (retain, nonatomic) NSString *taskBizKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
