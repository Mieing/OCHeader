@interface WCPayRecepictReaderMessageViewModel : ReaderMessageViewModel

@property (readonly, nonatomic) double itemInsideWidth;
@property (readonly, nonatomic) double readerViewWidth;
@property (readonly, nonatomic) double readerItemLMargin;
@property (readonly, nonatomic) double readerLineLMargin;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)getMessageFTSText:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)measureScheduleContentViewHeight:(id)a0 originY:(double)a1;
- (BOOL)isDisableEditMode;
- (BOOL)isShowReadAll;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;
- (BOOL)isReaderWrapScheduleJumpType;
- (BOOL)isNewPaymsgType;
- (struct CGSize { double x0; double x1; })headerMenuSize;
- (id)headerMenuImage;
- (id)muteSloganStr;
- (id)muteSloganFont;
- (struct CGSize { double x0; double x1; })muteSloganSize;
- (BOOL)hasMoneyUnit:(id)a0;
- (double)messageNodeViewWidth;
- (double)messageNodeViewHeight;
- (id)makeSearchPreview:(id)a0;

@end
