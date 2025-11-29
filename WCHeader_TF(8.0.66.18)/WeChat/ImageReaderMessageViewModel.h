@class NSArray;

@interface ImageReaderMessageViewModel : ReaderMessageViewModel

@property (readonly, nonatomic) unsigned int imageCount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imgIconSize;
@property (readonly, copy, nonatomic) NSArray *coverImageURLs;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (BOOL)showMultiCoverStyle;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculateDigestViewSize;
- (double)messageNodeViewHeight;
- (double)coverImageHeight;
- (id)digestText;
- (id)accessibilityDescription;

@end
