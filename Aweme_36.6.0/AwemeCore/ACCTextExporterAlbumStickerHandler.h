@interface ACCTextExporterAlbumStickerHandler : ACCTextExporterBasicHandler

- (BOOL)shouldTextExport;
- (long long)countToUpload;
- (id)textsToUpload;
- (id)newTextTemplatesForUploadWithPublishModel:(id)a0;
- (id)stickTextsForMultiProjects;
- (id)stickerTextsForImageAlbum;
- (id)templateStickerInfoFromJsonString:(id)a0;

@end
