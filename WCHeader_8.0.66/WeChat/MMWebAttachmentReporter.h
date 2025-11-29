@interface MMWebAttachmentReporter : NSObject

+ (void)reportIdKeyWithContentType:(id)a0;
+ (void)reportWKDownloadIdKeyWithContentType:(id)a0;
+ (void)reportIdKeyWithContentDispositionType:(id)a0;
+ (void)reportWKDownloadIdKeyWithContentDispositionType:(id)a0;
+ (void)reportIdKeyWithKey:(unsigned int)a0 value:(unsigned int)a1;
+ (void)reportWKDownloadIdKeyWithKey:(unsigned int)a0 value:(unsigned int)a1;
+ (void)reportKVWithWebViewUrlStr:(id)a0 fileUrlStr:(id)a1 contentType:(id)a2 contentDispositionType:(id)a3 contentDispositionFileExtName:(id)a4;
+ (void)reportWKDownloadKVWithWebViewUrlStr:(id)a0 fileUrlStr:(id)a1 contentType:(id)a2 contentDispositionType:(id)a3 contentDispositionFileExtName:(id)a4;

@end
