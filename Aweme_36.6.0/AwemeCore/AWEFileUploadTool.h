@class UIColor, UIImage, NSString;

@interface AWEFileUploadTool : NSObject <UIDocumentPickerDelegate, UIDocumentInteractionControllerDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIColor *tabBarTintColor;
@property (retain, nonatomic) UIColor *tabBarBarTintColor;
@property (retain, nonatomic) UIImage *tabBarBackgroundImage;
@property (retain, nonatomic) UIImage *tabBarShadowImage;
@property (retain, nonatomic) UIColor *barButtonItemTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFileUploadTool;

- (id)modelString;
- (BOOL)isNeedChangeTabColor;
- (void)colorReset;
- (void)callbacFailWithCode:(long long)a0 msg:(id)a1;
- (id)errorCode:(long long)a0 msg:(id)a1;
- (void)callbacSuccessWithFileUrl:(id)a0;
- (void)presentDocumentPickerWithUtis:(id)a0 compeletion:(id /* block */)a1;
- (void)uploadFile:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)audioSelectionJsbResponseData:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;

@end
