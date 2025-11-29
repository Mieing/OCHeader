@interface BDECPigeonAttachmentCustomerDownloadManager : BDECPigeonAttachmentDownloadManager

+ (id)shared;

- (id)downloadFilePathWithRelativeFilePath:(id)a0;
- (void)handleDownloadResult:(id)a0 key:(id)a1;

@end
