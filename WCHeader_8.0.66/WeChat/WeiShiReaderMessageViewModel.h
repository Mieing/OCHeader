@class NSArray;

@interface WeiShiReaderMessageViewModel : BaseMessageViewModel

@property (readonly, nonatomic) NSArray *readerWraps;
@property (readonly, nonatomic) double messageNodeViewWidth;
@property (readonly, nonatomic) double messageNodeViewHeight;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;

@end
