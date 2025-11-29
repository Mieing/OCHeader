@interface ACCTextExporterStickerHandler : ACCTextExporterBasicHandler

- (long long)countToUpload;
- (id)textsToUpload;
- (BOOL)enableSharePostStickerTextFix;
- (id)newTextTemplatesForUpload;
- (BOOL)needUploadForNewStyleShareScene;

@end
