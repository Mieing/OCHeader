@interface ACCTextAICGCustomKeyWordsHandler : ACCTextExporterBasicHandler

- (BOOL)shouldTextExport;
- (long long)countToUpload;
- (id)textsToUpload;
- (BOOL)canUploadAIGCCustomKeyWords;

@end
