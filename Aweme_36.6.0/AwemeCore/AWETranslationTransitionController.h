@class NSString, AWEHorizontalDismissTransition;

@interface AWETranslationTransitionController : NSObject <UIViewControllerTransitioningDelegate>

@property (nonatomic) unsigned long long translationStyle;
@property (nonatomic) long long durationType;
@property (retain, nonatomic) AWEHorizontalDismissTransition *swipeInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTranslationStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
