@class NSString;

@interface IESLLRouterRegister : HTSService <IESLLRouterRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transferModelByRouteTransitionInfo:(id)a0;
+ (id)iesll_registerURLString:(id)a0 customInitialization:(id /* block */)a1 registerCustomTransition:(id /* block */)a2 registerURLValidation:(id /* block */)a3;
+ (void)iesll_registerRouter:(id)a0 customInitialization:(id /* block */)a1 handler:(id /* block */)a2;
+ (void)iesll_registerRouter:(id)a0 handler:(id /* block */)a1;
+ (id)iesll_registerURLString:(id)a0 customInitialization:(id /* block */)a1;
+ (id)scheme;


@end
