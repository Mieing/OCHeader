@class NSString, NSArray;

@interface AWERouteInfo : NSObject <IESLLRouteInfo>

@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, nonatomic) long long transitionType;
@property (readonly, copy, nonatomic) NSArray *requiredParams;
@property (readonly, copy, nonatomic) NSArray *optionalParams;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *interceptorKey;
@property (copy, nonatomic) id /* block */ customTransition;
@property (copy, nonatomic) id /* block */ URLValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *URLString;
@property (nonatomic) long long transitionType;
@property (copy, nonatomic) NSArray *requiredParams;
@property (copy, nonatomic) NSArray *optionalParams;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) Class viewControllerClass;
@property (copy, nonatomic) id /* block */ customInitialization;
@property (copy, nonatomic) id /* block */ customTransition;
@property (copy, nonatomic) id /* block */ URLValidation;
@property (copy, nonatomic) id /* block */ viewControllerValidation;
@property (copy, nonatomic) NSString *interceptorKey;

- (id)registerCustomTransition:(id /* block */)a0;
- (id)registerOptionalParams:(id)a0;
- (id)registerTransitionType:(long long)a0;
- (id)registerRequiredParams:(id)a0;
- (id)registerInterceptorKey:(id)a0;
- (id)registerRouteOptions:(unsigned long long)a0;
- (id)registerURLValidation:(id /* block */)a0;
- (id)registerViewControllerValidation:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
