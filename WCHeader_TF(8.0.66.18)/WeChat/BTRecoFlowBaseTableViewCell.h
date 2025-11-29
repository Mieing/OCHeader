@class BTRecoFlowSectionData, GetRecommendFeedsResp_RecommendCardMsg, UIView, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg;
@protocol BTRecoFlowBaseTableViewCellDelegate;

@interface BTRecoFlowBaseTableViewCell : MMTableViewCell

@property (retain, nonatomic) UIView *highlightMaskView;
@property (weak, nonatomic) id<BTRecoFlowBaseTableViewCellDelegate> delegate;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg *card;
@property (retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg *msg;
@property (readonly, nonatomic) unsigned int itemIndex;
@property (nonatomic) long long cardPos;
@property (nonatomic) BOOL shouldShowBottomSeperateLine;
@property (retain, nonatomic) BTRecoFlowSectionData *sectionData;

+ (id)cellReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onAppear;
- (void)onDisappear;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
