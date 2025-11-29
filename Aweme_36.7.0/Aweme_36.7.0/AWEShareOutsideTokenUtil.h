@interface AWEShareOutsideTokenUtil : NSObject

+ (BOOL)checkShouldRunWithFunction:(id)a0;
+ (void)jumpWithoutAlertWithFunction:(id)a0 completion:(id /* block */)a1;
+ (void)showAlertWithText:(id)a0 function:(id)a1 completion:(id /* block */)a2;
+ (void)trackVSEvent:(id)a0 withDict:(id)a1 function:(id)a2;
+ (void)makeEventContextWithFunction:(id)a0;
+ (void)trackTokenShowEventWithFunction:(id)a0;
+ (void)trackTokenClickEventWithFunction:(id)a0;
+ (void)trackTokenCancelEventWithFunction:(id)a0;
+ (id)jumpAppNameWithShareType:(id)a0;
+ (void)generateOutsideTokenWithFunction:(id)a0 completion:(id /* block */)a1;
+ (void)openDestinationAppWithShareType:(id)a0;

@end
