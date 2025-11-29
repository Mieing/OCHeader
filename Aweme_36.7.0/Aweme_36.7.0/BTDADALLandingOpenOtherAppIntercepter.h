@class NSString;

@interface BTDADALLandingOpenOtherAppIntercepter : NSObject <BTDADALJumpInterceptorProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkInterceptJump:(id)a0 model:(id)a1 openURL:(id)a2 compeletion:(id /* block */)a3;


@end
