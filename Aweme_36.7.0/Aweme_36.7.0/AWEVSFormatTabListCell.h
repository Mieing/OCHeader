@class AWELiveStreamingTagView, UIView, NSString, UIImageView, NSDictionary, AWEVSJustWatchCoverView, YYLabel, AWEVSFormatTabCellViewModel, UILabel;
@protocol AWELivingTag;

@interface AWEVSFormatTabListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView<AWELivingTag> *latestImageView;
@property (retain, nonatomic) AWELiveStreamingTagView *episodePurchaseTag;
@property (retain, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) AWEVSJustWatchCoverView *justWatchedCoverView;
@property (retain, nonatomic) AWEVSFormatTabCellViewModel *viewModel;
@property (retain, nonatomic) UIView *justWatchedView;
@property (retain, nonatomic) UILabel *justWatchedInfoLabel;
@property (retain, nonatomic) UIImageView *justWatchedCoverViewForAnimal;
@property (copy, nonatomic) NSString *previousPageOfProfile;
@property (nonatomic, getter=isJustWatched) BOOL justWatched;
@property (copy, nonatomic) NSString *justWatchedVideoID;
@property (nonatomic) BOOL isWatchedVideoForEpisode;

+ (id)identifier;

- (id)descLabelFont;
- (void)p_oldSetupJustWatchView;
- (void)p_oldShowAnimationForJustWatched;
- (void)setupJustWatchView;
- (id)currentCoverView;
- (void)updateWithViewModel:(id)a0 logpb:(id)a1;
- (void)showAnimationForJustWatched;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)titleLabelFont;
- (BOOL)isLightTheme;
- (id)getImage;

@end
