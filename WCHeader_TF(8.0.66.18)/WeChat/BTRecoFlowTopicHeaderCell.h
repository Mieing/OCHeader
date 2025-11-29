@class MMUIButton, MMWebImageView, UILabel, NSMutableArray, UIButton;

@interface BTRecoFlowTopicHeaderCell : BTRecoFlowBaseTableViewCell

@property (retain, nonatomic) NSMutableArray *webImageViewList;
@property (retain, nonatomic) UIButton *aggregationLabel;
@property (retain, nonatomic) MMUIButton *xButton;
@property (retain, nonatomic) UIButton *tagLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMWebImageView *friend1Icon;
@property (retain, nonatomic) MMWebImageView *friend2Icon;

- (void)updateWithAggregationTitle:(id)a0 recommendTag:(id)a1 recommendWording:(id)a2 friendSeenHeadImgUrl:(id)a3 iconType:(unsigned int)a4;
- (void)onClickFeedbackBtn;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
