@class UIImageView, YYLabel, UIColor;

@interface AWEFeedRelatedSearchTipView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) YYLabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIColor *arrowColor;
@property (copy, nonatomic) id /* block */ noticeTapped;

- (void)reloadWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
