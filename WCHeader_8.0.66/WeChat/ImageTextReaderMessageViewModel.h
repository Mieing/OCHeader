@interface ImageTextReaderMessageViewModel : ReaderMessageViewModel

@property (readonly, nonatomic) double itemInsideWidth;
@property (readonly, nonatomic) double readerViewWidth;
@property (readonly, nonatomic) double readerItemLMargin;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isDisableEditMode;
- (BOOL)isShowReadAll;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;

@end
