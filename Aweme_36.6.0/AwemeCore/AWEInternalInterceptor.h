@class NSString;

@interface AWEInternalInterceptor : NSObject <AWERequestInterceptorProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkAllowToJumpToIronMan:(id)a0 currentURL:(id)a1;
+ (void)checkRequest:(id)a0 isClickJump:(BOOL)a1 model:(id)a2 error:(id *)a3;


@end
