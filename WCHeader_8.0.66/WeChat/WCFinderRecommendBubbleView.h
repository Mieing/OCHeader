@class UIImageView, UILabel, NSString;

@interface WCFinderRecommendBubbleView : MMUIView

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *recommendTipsLabel;
@property (retain, nonatomic) UILabel *nextTipsLabel;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *railTips;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maxWidth:(double)a1 railTips:(id)a2;
- (void)updateWithLeftIcon:(id)a0 recommendTips:(id)a1 nextTips:(id)a2 nextBlock:(id /* block */)a3;
- (void)layoutAllSubviews;
- (void).cxx_destruct;

@end
