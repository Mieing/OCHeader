@class NSAttributedString;

@interface AttributedReaderMessageViewModel : ReaderMessageViewModel {
    NSAttributedString *m_digestAttrString;
}

@property (nonatomic) BOOL forceHideRightCoverImage;
@property (readonly, nonatomic) double itemInsideWidth;
@property (readonly, nonatomic) double readerViewWidth;
@property (readonly, nonatomic) double readerViewInsideWidth;
@property (readonly, nonatomic) double readerItemLMargin;
@property (readonly, nonatomic) double readerItemHMargin;
@property (readonly, nonatomic) NSAttributedString *digestAttrString;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)getMessageFTSText:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowReadAll;
- (BOOL)isShowHeadAndNicknameArea;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;
- (BOOL)canShowRightCoverImage;
- (double)rightCoverImageWidth;
- (double)rightCoverImageHeight;
- (id)makeSearchPreview:(id)a0;
- (double)messageNodeViewWidth;
- (double)messageNodeViewHeight;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
