@class UIImageView, MMUILabel, BTReaderStyleRecommendMsgShowAllCellViewModel;

@interface BTReaderStyleRecommendMsgShowAllCellView : BTBaseRecommendMsgCellView {
    MMUILabel *m_titleLabel;
    UIImageView *m_arrowView;
}

@property (readonly, nonatomic) BTReaderStyleRecommendMsgShowAllCellViewModel *viewModel;

- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)initTitleLabel;
- (void)initArrowView;
- (void).cxx_destruct;

@end
