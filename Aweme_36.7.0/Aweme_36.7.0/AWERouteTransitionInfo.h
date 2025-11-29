@class NSString, NSDictionary, NSDate, UIViewController;

@interface AWERouteTransitionInfo : NSObject <IESLLRouteTransitionInfo, IESLLRouteTransitionInfo>

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *paramsDictionary;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) long long transitionType;
@property (copy, nonatomic) id /* block */ transitionCompletion;
@property (copy, nonatomic) id /* block */ defaultTransitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *paramsDictionary;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) long long transitionType;
@property (copy, nonatomic) id /* block */ transitionCompletion;
@property (copy, nonatomic) id /* block */ defaultTransitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *paramsDictionary;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) long long transitionType;
@property (copy, nonatomic) id /* block */ transitionCompletion;
@property (copy, nonatomic) id /* block */ defaultTransitionHandler;
@property (nonatomic) BOOL canOpen;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDate *start;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ bizTransitionCompletion;
@property (copy, nonatomic) id /* block */ transferCompletion;

- (void)completeWithSucceed:(BOOL)a0 viewController:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
