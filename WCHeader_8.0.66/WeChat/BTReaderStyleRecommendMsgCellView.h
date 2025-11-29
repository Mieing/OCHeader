@class MMUILabel, CAGradientLayer, BTReaderStyleRecommendMsgCellViewModel, RichTextView, MMWebImageView;

@interface BTReaderStyleRecommendMsgCellView : BTBaseRecommendAppMsgCellView {
    MMWebImageView *m_coverImageView;
    RichTextView *m_titleLabel;
    RichTextView *m_digestLabel;
    MMUILabel *m_recReasonLabel;
    CAGradientLayer *m_maskLayer;
}

@property (readonly, nonatomic) BTReaderStyleRecommendMsgCellViewModel *viewModel;

- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)layoutLargeCoverItem;
- (void)layoutNormalCoverItem;
- (void)initCoverView;
- (id)coverImageView;
- (void)initTitleView;
- (void)initDigestView;
- (void)initRecReasonView;
- (void)initCoverMask;
- (void)updateImage:(id)a0 widthUrl:(id)a1;
- (void).cxx_destruct;

@end
