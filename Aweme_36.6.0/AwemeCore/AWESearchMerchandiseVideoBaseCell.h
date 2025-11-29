@class NSString, UIImageView, AWESearchVideoView, AWESearchMerchandiseGoodsInfoView;

@interface AWESearchMerchandiseVideoBaseCell : AWESearchOptimizeGoodsCell

@property (retain, nonatomic) UIImageView *videoTagView;
@property (retain, nonatomic) AWESearchVideoView *videoView;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWESearchMerchandiseGoodsInfoView *infoView;

+ (id)identifier;

- (double)currPlaybackTime;
- (void)configWithModel:(id)a0;
- (void)setCurrPlaybackTime:(double)a0;
- (void)setActionRecord:(id)a0;
- (void)videoStopAndFree;
- (void)videoInit;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;

@end
