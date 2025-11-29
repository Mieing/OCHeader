@interface ImageMsgRecordViewModel : ImageMessageViewModel

- (id)thumbImage;
- (unsigned int)thumbDownloadStatus;
- (BOOL)isImageExists;
- (id)cellViewClassName;
- (id)maskedThumbImage;
- (id)maskedThumbImagePath;
- (void)createMaskImageFrom:(id)a0 toPath:(id)a1;

@end
