@interface CSJOncallUploadManager : NSObject

+ (void)removeCoverView;
+ (void)showCoverView;
+ (void)uploadAdInfoWithId:(id)a0 meta:(id)a1 message:(id)a2 complete:(id /* block */)a3;
+ (void)showOncallUploadAlertWithMeta:(id)a0 message:(id)a1 complete:(id /* block */)a2;
+ (id)_buildUploadBodyWithRecordId:(id)a0 deviceInfo:(id)a1 logFilePath:(id)a2;

- (BOOL)textFieldShouldBeginEditing:(id)a0;

@end
