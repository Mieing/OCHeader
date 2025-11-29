@class NSString;

@interface IESECRouterServiceImpl : NSObject <IESECRouterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)transferToURLString:(id)a0;
+ (void)transferToURLString:(id)a0 completion:(id /* block */)a1;
+ (id)viewControllerForURLString:(id)a0;
+ (BOOL)canOpenURLString:(id)a0;
+ (BOOL)transferToURLString:(id)a0 fromViewController:(id)a1;


@end
