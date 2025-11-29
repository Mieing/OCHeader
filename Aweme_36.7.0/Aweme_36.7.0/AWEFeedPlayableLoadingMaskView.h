@class CAGradientLayer, NSString, AWEFeedPlayableLoadingMaskModel, UILabel, UIView, BDImageView;

@interface AWEFeedPlayableLoadingMaskView : UIView <AWEFeedPlayableLoadingMaskView>

@property (retain, nonatomic) AWEFeedPlayableLoadingMaskModel *model;
@property (retain, nonatomic) CAGradientLayer *colorLayer;
@property (retain, nonatomic) CAGradientLayer *blackLayer;
@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *capsuleTitleLabel;
@property (retain, nonatomic) UILabel *capsuleSubtitleLabel;
@property (retain, nonatomic) UIView *capsuleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLayouts;
- (void)showWithModel:(id)a0 inView:(id)a1;
- (void)showAnimatedWithModel:(id)a0 inView:(id)a1;
- (void)updateLoadingMaskView;
- (void)setupSubviewsForInteractive;
- (void)setupLayoutsForInteractive;
- (double)bottomOffset:(double)a0;
- (id)p_imageWith:(id)a0 alpha:(double)a1;
- (id)p_bgColor;
- (void).cxx_destruct;
- (void)hide;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
