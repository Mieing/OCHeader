@class NSString;

@interface WCTransitionUnit : NSObject <UIViewControllerTransitioningDelegate>

@property (nonatomic) unsigned long long transitionType;
@property (nonatomic) struct CGPoint { double x; double y; } transitionBeginPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionResultRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionUnitWithType:(unsigned long long)a0;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
