@class NSString, NSObject;
@protocol AFDColorRingTransitionOuterContextProvider;

@interface AFDColorRingTransitionProviderProxy : UIViewController <AFDColorRingTransitionOuterContextProvider>

@property (weak, nonatomic) NSObject<AFDColorRingTransitionOuterContextProvider> *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)colorRingTransitionShrinkFinish;
- (id)colorRingTransitionStartView;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
