@class MMHeadImageView, CAGradientLayer, BTLiveBarItemViewModel, NSString, UIView, MMWebImageView, MMUILabel;

@interface BTLiveBarItemView : MMUIButton <MMWebImageViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *brandNameLabel;
@property (retain, nonatomic) UIView *headImageBorderView;
@property (retain, nonatomic) MMWebImageView *liveImageView;
@property (retain, nonatomic) CAGradientLayer *mainColorGradientLayer;
@property (retain, nonatomic) CAGradientLayer *shadowGradientLayer;
@property (retain, nonatomic) BTLiveBarItemViewModel *itemViewModel;
@property (nonatomic) unsigned int index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)iconWidth;

- (id)initWithViewModel:(id)a0;
- (void)updateViewModel:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)initSubviews;
- (void)updateHeaderView;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
