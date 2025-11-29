@class UILabel, MMUILabel, BTReaderStyleRecommendMsgHeaderCellViewModel;

@interface BTReaderStyleRecommendMsgHeaderCellView : BTBaseRecommendMsgCellView {
    UILabel *m_headerLabel;
    MMUILabel *m_aggregationLabel;
    MMUILabel *m_timeLabel;
}

@property (nonatomic) BOOL forceSetHighlight;
@property (readonly, nonatomic) BTReaderStyleRecommendMsgHeaderCellViewModel *viewModel;

- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)initHeaderTitleLabel;
- (void)initAggregationLabel;
- (void)initTimeLabel;
- (BOOL)needHighlightLayer;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)forceSetHighlight:(BOOL)a0;
- (id)getAggregationLabelAccessibilityLabel;
- (void).cxx_destruct;

@end
