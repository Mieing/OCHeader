@interface APBToygerUploadTask : APBToygerBaseTask

- (void)uploadImage;
- (void)handleFailWithRetCodeSub:(id)a0 retMessageSub:(id)a1;
- (void)didFinishUploadWithSuccess:(BOOL)a0 retCode:(id)a1 retMessage:(id)a2 extInfo:(id)a3;
- (void)requestAgain;

@end
