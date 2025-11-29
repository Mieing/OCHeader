@class UIImageView, CJPayButton, UIView, CJPayLabel, CJPayStandardBubbleView;

@interface CJPayAssetRecommendView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CJPayLabel *recommendMethodTitle;
@property (retain, nonatomic) UIImageView *recommendIcon;
@property (retain, nonatomic) CJPayButton *recommendButton;
@property (retain, nonatomic) CJPayStandardBubbleView *bubbleView;
@property (copy, nonatomic) id /* block */ clickedRecommendViewBlock;

- (id)cj_performanceMonitorName;
- (void)updateRecommendView:(id)a0;
- (void)p_recommendButtonTapped;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
