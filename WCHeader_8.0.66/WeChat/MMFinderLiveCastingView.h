@class MMLiveCastDeviceViewItem, UIButton, UIImageView, MMUILabel;
@protocol MMFinderLiveCastingViewDelegate;

@interface MMFinderLiveCastingView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *deviceLabel;
@property (weak, nonatomic) id<MMFinderLiveCastingViewDelegate> delegate;
@property (retain, nonatomic) MMLiveCastDeviceViewItem *viewItem;
@property (retain, nonatomic) UIButton *stopButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)stopButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
