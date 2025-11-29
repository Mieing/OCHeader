@class CAGradientLayer, AWEProfileRankModel, UIImageView, UILabel, UIView, AWEProfileHeaderContext;
@protocol AWEDouyinSelectBrandTrackerProtocol;

@interface AWEProfileBillboardRankView : UIView

@property (nonatomic) double scaleRate;
@property (nonatomic) struct CGSize { double width; double height; } rankViewSize;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) UIImageView *crownImageView;
@property (retain, nonatomic) UIImageView *rankArrowImageView;
@property (retain, nonatomic) UIView *rankBackgroundView;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (retain, nonatomic) AWEProfileHeaderContext *headerContext;
@property (retain, nonatomic) id<AWEDouyinSelectBrandTrackerProtocol> douyinSelectBrandTracker;
@property (nonatomic) BOOL hasTrackedShowIdentifies;
@property (weak, nonatomic) AWEProfileRankModel *rankModel;

- (BOOL)isJXRankType;
- (void)configButtonIconWith:(id)a0;
- (id)titleColorImageWith:(id)a0 colorEnd:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleRate:(double)a1;
- (void)setProfileHeaderContext:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
