@class BizAppReaderMessageViewModel, BizAppReaderMessageBigPicView;

@interface BizAppReaderMessageCellView : BizAppBaseMessageCellView

@property (retain, nonatomic) BizAppReaderMessageBigPicView *bigPicView;
@property (readonly, nonatomic) BizAppReaderMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)layoutStandardContentView;
- (void)addCoverImageView;
- (void)addTitleLabel;
- (void)addDigestLabel;
- (void)layoutBigPicContentViewWithViewModel:(id)a0;
- (void)updateSourceView:(id)a0 nickname:(id)a1 detailStr:(id)a2;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
