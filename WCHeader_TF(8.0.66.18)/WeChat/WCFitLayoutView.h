@class UILabel, MMWebImageView;

@interface WCFitLayoutView : UIView

@property (nonatomic) long long layoutType;
@property (readonly, nonatomic) MMWebImageView *leftImageView;
@property (readonly, nonatomic) UILabel *rightLabel;
@property (nonatomic) double maxWidth;

- (id)initLeftImageRightTitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
