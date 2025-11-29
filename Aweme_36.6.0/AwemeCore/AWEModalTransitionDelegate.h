@class UIColor, NSString, SwipeInteractionController, UIView;

@interface AWEModalTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) SwipeInteractionController *swipeInteractionController;
@property (nonatomic) long long durationType;
@property (retain, nonatomic) UIColor *maskViewColor;
@property (retain, nonatomic) UIColor *viewColor;
@property (retain, nonatomic) UIColor *auxViewColor;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double animationDuration;
@property (copy, nonatomic) id /* block */ presentCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
