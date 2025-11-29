@interface IWebNetTaskCallBack : NSObject

- (void)OnUploadCompleted:(id)a0 response:(id)a1;
- (void)OnProgressChanged:(id)a0 completedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)OnDownloadCompleted:(id)a0 response:(id)a1;

@end
