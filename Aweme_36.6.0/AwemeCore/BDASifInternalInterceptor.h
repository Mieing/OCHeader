@class NSString;

@interface BDASifInternalInterceptor : NSObject <BDASifRequestInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkRequest:(id)a0 isClicked:(BOOL)a1 isAutoJump:(BOOL)a2 model:(id)a3 adInfo:(id)a4 error:(id *)a5;
+ (void)handleRouterActionWithUrl:(id)a0 model:(id)a1 error:(id *)a2;


@end
