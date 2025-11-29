@class AWETheaterPageContext, AWETheaterBannerCoverView, AWETheaterBannerInfoView, AWETheaterCommonSectionItem;

@interface AWETheaterBannerBaseContentCell : UICollectionViewCell

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterCommonSectionItem *sectionItem;
@property (retain, nonatomic) AWETheaterBannerInfoView *infoView;
@property (retain, nonatomic) AWETheaterBannerCoverView *coverView;
@property (nonatomic) BOOL isDisplaying;
@property (copy, nonatomic) id /* block */ tapVolumeButtonBlock;
@property (copy, nonatomic) id /* block */ showVolumeButtonBlock;

- (void)updateTitleLabel:(id)a0;
- (void)updateCoverHiddenStatus:(BOOL)a0;
- (void)updateSoundImageViewShowStatus:(BOOL)a0;
- (void)updateBannerTagShowStatus:(BOOL)a0;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)updateInfoUserInteractionEnabledStatus:(BOOL)a0;
- (void)trackCellWillDisplay;
- (void)trackCellWillDisappear;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)updateMuteStatus:(BOOL)a0;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;
- (void)handleTap;

@end
