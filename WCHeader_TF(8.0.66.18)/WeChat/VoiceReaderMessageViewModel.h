@class NSString;

@interface VoiceReaderMessageViewModel : ReaderMessageViewModel

@property (readonly, nonatomic) NSString *timeText;
@property (readonly, nonatomic) double labelMaxWidth;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)messageNodeViewHeight;
- (struct CGSize { double x0; double x1; })calculateTitleViewSize;

@end
