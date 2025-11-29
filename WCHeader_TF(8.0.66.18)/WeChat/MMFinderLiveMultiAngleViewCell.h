@class MMUIImageView, NSString, MMLiveCDNPlayerView, MMUIView, LiveSdkChannelParamsDesc, LiveSdkChannelParams, MMUILabel;

@interface MMFinderLiveMultiAngleViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate>

@property (retain, nonatomic) MMUIImageView *angleImageView;
@property (retain, nonatomic) MMLiveCDNPlayerView *playerView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIView *coverView;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) LiveSdkChannelParamsDesc *channelParamsDesc;
@property (retain, nonatomic) LiveSdkChannelParams *channelParams;
@property (nonatomic) BOOL isSelect;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) BOOL isCoverSpam;
@property (retain, nonatomic) NSString *coverSpamText;
@property (nonatomic) double itemHeight;
@property (nonatomic) BOOL useFillModeForLandscapeVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)liveMultiAngleViewDisappearHandle;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)layoutAngleImageView;
- (void)layoutPlayerView;
- (id)getPlayerUrlFromChannelParamsDesc;
- (void)loadImage:(id)a0;
- (void)layoutTitleView;
- (void)play;
- (void)pause;
- (void)updateRenderMode;
- (void).cxx_destruct;

@end
