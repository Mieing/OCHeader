@interface AWEIMHistoryMediaUtils : NSObject

+ (void)requestImageWith:(id)a0 witchMessage:(id)a1;
+ (id)getMessageBaseViewController;
+ (id)getMessageContainerViewController;
+ (id)p_getMessageBaseViewControllerWithNavigationController:(id)a0;
+ (id)getVoiceOverDateText:(double)a0;
+ (id)getVoiceOverTitle:(id)a0;
+ (id)voiceOverStringFromNumber:(id)a0;
+ (id)getDateText:(double)a0;
+ (void)requestImageWith:(id)a0 placeHolder:(id)a1 witchMessage:(id)a2;
+ (void)requestImageWith:(id)a0 placeHolder:(id)a1 witchMessage:(id)a2 customGetBlock:(id /* block */)a3 customSaveBlock:(id /* block */)a4;
+ (void)requestUnencryptedMessageWith:(id)a0 placeHolder:(id)a1 message:(id)a2;
+ (void)p_requestEncryptedImageForCell:(id)a0 message:(id)a1;
+ (id)imageResourceDownloadModel:(id)a0;
+ (void)requestEncryptedMessageWith:(id)a0 message:(id)a1 resource:(id)a2 customGetBlock:(id /* block */)a3 customSaveBlock:(id /* block */)a4;
+ (void)requestEncryptedMessageWith:(id)a0 message:(id)a1 resource:(id)a2;
+ (void)checkImageViewEmpty:(id)a0;
+ (void)setLocalImage:(id)a0 message:(id)a1 filePath:(id)a2 customeSaveBlock:(id /* block */)a3;
+ (void)setLocalImage:(id)a0 message:(id)a1 filePath:(id)a2;
+ (void)requestEncryptedWebImage:(id)a0 message:(id)a1 resource:(id)a2;
+ (void)getCacheImageWithEncryptedMessage:(id)a0 mediaCell:(id)a1 completion:(id /* block */)a2;
+ (id)clipAndResizeImageIfNeed:(id)a0 mediaCellSize:(struct CGSize { double x0; double x1; })a1;
+ (id)resizeImageIfNeed:(id)a0 mediaCellSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)hasTrackedMsgID:(long long)a0;
+ (void)trackMsgID:(long long)a0;
+ (id)trackSet;
+ (id)stringFromNumber:(id)a0;

@end
