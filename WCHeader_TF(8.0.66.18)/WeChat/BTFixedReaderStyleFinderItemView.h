@class BTFinderRecommendRedPacketView, CAGradientLayer;

@interface BTFixedReaderStyleFinderItemView : BTFixedFinderBaseItemView

@property (retain, nonatomic) BTFinderRecommendRedPacketView *redPacketView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (void)setupHeader:(id)a0;
- (void)setupCoverContainer:(id)a0;
- (void)layoutCoverContainerView:(id)a0;
- (void).cxx_destruct;

@end
