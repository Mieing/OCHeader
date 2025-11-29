@class UIView, NSString, UIImageView, UIButton, AWEVSFormatLiveStreamingView, CAGradientLayer, NSDictionary, AWEVSFormatTabCellViewModel, UILabel;

@interface AWEVSFormatTabStreamingCell : UITableViewCell

@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEVSFormatLiveStreamingView *liveStreamingView;
@property (retain, nonatomic) UIView *vsWatermarkView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *purchaseButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayerForEpisodePurchaseButton;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSDictionary *logPb;
@property (nonatomic) BOOL hadReportedPlay;
@property (retain, nonatomic) AWEVSFormatTabCellViewModel *viewModel;
@property (copy, nonatomic) NSString *previousPageOfProfile;
@property (copy, nonatomic) NSString *justWatchedVideoID;
@property (nonatomic) BOOL isWatchedVideoForEpisode;
@property (copy, nonatomic) id /* block */ episodePurchasedNeedEnterRoomBlock;
@property (nonatomic) BOOL needSyncForSmoothEnterRoom;

+ (id)identifier;

- (id)commonParameters;
- (id)currentThemeName;
- (id)descLabelFont;
- (void)p_removeVSWaterMark;
- (void)trackStreamingDuration;
- (void)purchaseForLive;
- (void)purchaseForEpisode;
- (void)trackEpisodePurchaseClick;
- (void)trackStreamingFinish;
- (void)trackStreamingPlay;
- (void)addVSWatermarkView:(id)a0 targetView:(id)a1;
- (id)paidPanelParams;
- (void)updateWithStreamingViewModel:(id)a0 referString:(id)a1 previousPage:(id)a2 logpb:(id)a3;
- (id)vsDistributionEntranceCommonParams;
- (void)trackShowStreamingCard;
- (void)trackStreamingV2Duration;
- (void)trackStreamingClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)clear;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stop;
- (id)titleLabelFont;
- (void)purchase;

@end
