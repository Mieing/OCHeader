@class MMUIButton, UIButton, BTRecoFlowSeparatorLineView, MMWebImageView, NSMutableArray, MMUILabel;

@interface BTRecoFlowMsgCell : BTRecoFlowBaseTableViewCell

@property (retain, nonatomic) NSMutableArray *webImageViewList;
@property (retain, nonatomic) MMUIButton *xButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (readonly, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) MMUILabel *digestLabel;
@property (retain, nonatomic) UIButton *tagLabel;
@property (retain, nonatomic) MMUIButton *aggregationLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *smallPictureButton;
@property (retain, nonatomic) BTRecoFlowSeparatorLineView *bottomSeparatorView;
@property (nonatomic) double bottomSeparatorLeftPadding;
@property (nonatomic) double bottomSeparatorRightPadding;

- (id)generateSeparatorView;
- (struct CGSize { double x0; double x1; })smallPictureButtonSize;
- (struct CGSize { double x0; double x1; })playButtonSize;
- (void)layoutSubviews;
- (void)updateWithItemMsg:(id)a0 cellWidth:(double)a1;
- (void)updateWithTitle:(id)a0 recommendTag:(id)a1 aggregationTitle:(id)a2 iconType:(unsigned int)a3 recommendWording:(id)a4;
- (void *)buildSubtitleHorizontalStack:(void *)a0;
- (void *)buildBottomSeparatorView:(void *)a0;
- (id)webImageViewAtIndex:(long long)a0;
- (void)onClickFeedbackBtn;
- (void)onClickAggregationLabel;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
