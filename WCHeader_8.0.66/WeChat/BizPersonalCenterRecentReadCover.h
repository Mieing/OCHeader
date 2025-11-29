@class SightIconView, MMUIImageView, MMWebImageView;

@interface BizPersonalCenterRecentReadCover : UIView

@property (nonatomic) double outSize;
@property (nonatomic) double innerSize;
@property (nonatomic) double imgIconSize;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMUIImageView *playVoiceFg;
@property (retain, nonatomic) MMUIImageView *playVoiceBg;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) MMUIImageView *imgIconView;

- (id)init;
- (void)setupViews;
- (void)showType:(long long)a0 withURL:(id)a1;
- (void).cxx_destruct;

@end
