@class AWEAwemeModel, UIView, AWESearchMerchandiseGoodsInfoView, AWEEcommerceSearchLongPressGuideView, NSString, UIImageView, UILabel, AWESearchVideoView;

@interface AWESearchMerchandiseGoodsBaseCell : AWESearchOptimizeGoodsCell <AWEEcommerceSearchCellLongPressProtocol>

@property (retain, nonatomic) AWEEcommerceSearchLongPressGuideView *longPressGuideView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIImageView *replayTagView;
@property (retain, nonatomic) AWESearchVideoView *videoView;
@property (retain, nonatomic) UIView *replayIconView;
@property (retain, nonatomic) UIImageView *replayIcon;
@property (retain, nonatomic) UILabel *replayLabel;
@property (retain, nonatomic) AWESearchMerchandiseGoodsInfoView *infoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (double)currPlaybackTime;
- (void)configWithModel:(id)a0;
- (void)setCurrPlaybackTime:(double)a0;
- (void)playLongPressGuideLottie;
- (void)setActionRecord:(id)a0;
- (BOOL)canShowPlayLongPressGuide;
- (id)getAwemeModel;
- (void)videoStopAndFree;
- (void)videoInit;
- (id)getTrackerParams;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (id)activeView;
- (BOOL)canPlayVideo;

@end
