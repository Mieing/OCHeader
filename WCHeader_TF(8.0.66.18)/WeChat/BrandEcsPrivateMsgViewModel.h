@interface BrandEcsPrivateMsgViewModel : BaseMessageViewModel

@property (readonly, nonatomic) double readerViewWidth;
@property (readonly, nonatomic) double readerItemLMargin;
@property (readonly, nonatomic) double readerViewInsideWidth;
@property (nonatomic) BOOL hasExposure;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)init;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;

@end
