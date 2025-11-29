@class UILabel, UIImageView, MMFinderLiveWecoinLabelViewConfig;

@interface MMFinderLiveWecoinLabelView : UIView

@property (retain, nonatomic) UILabel *coinLabel;
@property (retain, nonatomic) UIImageView *coinImageView;
@property (retain, nonatomic) MMFinderLiveWecoinLabelViewConfig *config;

- (id)init;
- (void)initViews;
- (void)setupViews;
- (void)updateWithConfig:(id)a0;
- (void)setWecoinAmount:(unsigned long long)a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
