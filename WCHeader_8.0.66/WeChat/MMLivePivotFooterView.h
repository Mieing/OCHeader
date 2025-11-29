@class UIImageView, NSString, MMLiveDashedLabelView;

@interface MMLivePivotFooterView : UICollectionReusableView

@property (retain, nonatomic) MMLiveDashedLabelView *dashedLabel;
@property (retain, nonatomic) UIImageView *loadingRing;
@property (nonatomic) unsigned long long displayState;
@property (retain, nonatomic) NSString *titleText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void).cxx_destruct;

@end
