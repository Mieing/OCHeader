@class NSString;

@interface BDASifJumpAppInterceptor : NSObject <BDASifRequestInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalSchemes;
+ (void)checkRequest:(id)a0 isClicked:(BOOL)a1 isAutoJump:(BOOL)a2 model:(id)a3 adInfo:(id)a4 error:(id *)a5;


@end
