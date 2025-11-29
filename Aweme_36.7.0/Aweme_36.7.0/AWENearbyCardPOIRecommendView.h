@class UIFont, AWENearbyPOIContentModel, UIView, NSAttributedString, UIImageView, AWEGradientView, YYLabel, UIColor;

@interface AWENearbyCardPOIRecommendView : UIView

@property (retain, nonatomic) AWENearbyPOIContentModel *model;
@property (retain, nonatomic) YYLabel *recommendLabel;
@property (retain, nonatomic) UIView *recommendContainer;
@property (nonatomic) long long maxWidth;
@property (retain, nonatomic) UIImageView *awemeIcon;
@property (retain, nonatomic) AWEGradientView *iconBGView;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIFont *labelFont;
@property (copy, nonatomic) NSAttributedString *truncationToken;

- (void)updateSubViewNoIconWithSring:(id)a0 Model:(id)a1 maxWidth:(double)a2 leftAndRightOffset:(double)a3;
- (void)updateSubViewHaveIconWithSring:(id)a0 model:(id)a1 showIconStyleType:(unsigned long long)a2 maxWidth:(double)a3;
- (void)updateSubViewNoIconWithAttributedStr:(id)a0 Model:(id)a1 maxWidth:(double)a2 leftAndRightOffset:(double)a3;
- (void)updateUIWithNOIconWithModel:(id)a0 maxWidth:(double)a1 leftAndRightOffset:(double)a2;
- (void)updateUIWithStyleIconNoBG;
- (void)updateUIWithStyleIconHasBG;
- (void)updateUIWithStyleAllNoBG;
- (void).cxx_destruct;

@end
