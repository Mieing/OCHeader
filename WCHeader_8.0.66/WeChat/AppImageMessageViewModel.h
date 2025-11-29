@interface AppImageMessageViewModel : ImageMessageViewModel

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)accessibilityMessageType;
- (id)thumbImage;
- (id)maskedThumbImagePath;
- (id)thumbImagePath;
- (id)hdImagePath;
- (BOOL)isImageExists;
- (id)imageData;

@end
