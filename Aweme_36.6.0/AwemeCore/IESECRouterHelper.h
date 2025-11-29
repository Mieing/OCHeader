@class NSString;

@interface IESECRouterHelper : NSObject <IESECRouterRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)iesec_registerRouter:(id)a0 pageClass:(Class)a1 handler:(id /* block */)a2;
+ (void)routerMonitor:(id)a0 transferResult:(id)a1;
+ (id)scheme;


@end
