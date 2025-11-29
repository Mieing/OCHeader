@class NSMutableArray, MMWebImageView;

@interface BTRecoFlowTopicBigPictureCell : BTRecoFlowTopicHeaderCell

@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) NSMutableArray *webImageViewList;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithAggregationTitle:(id)a0 recommendTag:(id)a1 recommendWording:(id)a2 itemMessage:(id)a3 cellWidth:(double)a4 friendSeenHeadImgUrl:(id)a5 iconType:(unsigned int)a6;
- (void).cxx_destruct;

@end
