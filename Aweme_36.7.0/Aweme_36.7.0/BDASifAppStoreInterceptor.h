@class NSString;

@interface BDASifAppStoreInterceptor : NSObject <BDASifRequestInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isToAppStoreRequestURLStr:(id)a0;
+ (void)checkRequest:(id)a0 isClicked:(BOOL)a1 isAutoJump:(BOOL)a2 model:(id)a3 adInfo:(id)a4 error:(id *)a5;


@end
