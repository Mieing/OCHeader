@class NSString;

@interface BrandJumpMpAppService : NSObject <MMTipsViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAppURL;
+ (BOOL)isMpAppInstalled;
+ (BOOL)openMpAppURL:(id)a0 hostController:(id)a1 scene:(unsigned long long)a2;
+ (void)presentAppIntroController:(id)a0 title:(id)a1 desc:(id)a2 operationTitle:(id)a3 cancelTitle:(id)a4 url:(id)a5;
+ (void)presentAppIntroController:(id)a0 title:(id)a1 desc:(id)a2 operationTitle:(id)a3 cancelTitle:(id)a4 url:(id)a5 completion:(id /* block */)a6;
+ (void)openMpAppStorePage;
+ (id)convertToAppURL:(id)a0;
+ (BOOL)openMpAppURL:(id)a0 hostController:(id)a1 title:(id)a2 downloadTitle:(id)a3 operationTitle:(id)a4 cancelTitle:(id)a5 completion:(id /* block */)a6;
+ (BOOL)profileMessageMore_openMpAppURL:(id)a0 hostController:(id)a1;
+ (BOOL)profileMessageEdit_openMpAppURL:(id)a0 hostController:(id)a1;
+ (BOOL)flutterComment_openMpAppURL:(id)a0 hostController:(id)a1;
+ (BOOL)flutterUserProfile_openMpAppURL:(id)a0 hostController:(id)a1;


@end
