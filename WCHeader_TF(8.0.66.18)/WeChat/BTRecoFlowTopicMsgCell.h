@class BTRecoFlowSeparatorLineView, MMUILabel, MMWebImageView;

@interface BTRecoFlowTopicMsgCell : BTRecoFlowBaseTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) BTRecoFlowSeparatorLineView *topSeparatorView;
@property (retain, nonatomic) BTRecoFlowSeparatorLineView *bottomSeparatorView;
@property (nonatomic) double bottomSeparatorLeftPadding;
@property (nonatomic) double bottomSeparatorRightPadding;
@property (nonatomic) BOOL isFirstRow;
@property (nonatomic) BOOL isLastRow;

- (id)generateSeparatorView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithItemMsg:(id)a0 cellWidth:(double)a1;
- (void).cxx_destruct;

@end
