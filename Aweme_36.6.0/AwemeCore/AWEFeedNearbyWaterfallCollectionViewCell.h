@class AWEAwemeModel, NSString, UIImageView, AWEMarkView, AWEGradientView, UIView, UILabel;
@protocol AWESearchLiveStatusViewProtocol;

@interface AWEFeedNearbyWaterfallCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *bottomGradientMaskView;
@property (retain, nonatomic) AWEMarkView *poiButton;
@property (retain, nonatomic) AWEMarkView *poiColorfulButton;
@property (retain, nonatomic) AWEMarkView *distanceButton;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UIImageView *mixVideoIconView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *liveTypeTagLabel;
@property (retain, nonatomic) UIView *liveTypeTagView;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UIView *adTagView;
@property (retain, nonatomic) UIView<AWESearchLiveStatusViewProtocol> *liveSearchStatusView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *likeContainerView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) AWEGradientView *topGradientMaskView;
@property (retain, nonatomic) UIImageView *photoImageView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double startPlayTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL shouldShowPOIButton;
@property (nonatomic) BOOL shouldOptimizeUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1 useTwoLine:(BOOL)a2 useSearchLiveStyle:(BOOL)a3;
+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;
+ (BOOL)enableMixVideo:(id)a0;
+ (id)poiService;
+ (double)descriptionLabelLineSpacingForOptimizeUI:(BOOL)a0;
+ (id)appendMixVideoTagIfNeededWithAweme:(id)a0 attributedString:(id)a1 fontSize:(double)a2;
+ (double)coverImageRatioNewStyleForAweme:(id)a0;
+ (double)coverImageRatioForAweme:(id)a0;
+ (double)descriptionLabelInsetForOptimizeUI:(BOOL)a0;
+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1 shouldShowPOI:(BOOL)a2 shouldOptimizeNearbyUI:(BOOL)a3;
+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1 shouldShowPOI:(BOOL)a2 shouldOptimizeNearbyUI:(BOOL)a3 useTwoLine:(BOOL)a4 useSearchLiveStyle:(BOOL)a5;

- (void)avatarClicked;
- (void)updateWithAweme:(id)a0;
- (void)usernameClicked;
- (BOOL)useSearchLiveStreamingStyle;
- (void)setNeedsTrackDuration;
- (BOOL)useSearchVideoNewStyle;
- (id)coverAccessibilityLabelForAweme:(id)a0;
- (id)distanceAccessiblityLabelForAweme:(id)a0;
- (id)likeCountAccessibilityLabelForAweme:(id)a0;
- (void)enterUserDetail:(BOOL)a0;
- (void)trackLiveWindowDurationWithItem:(id)a0 startPlayTime:(double)a1;
- (void)trackLiveWindowShowWithItem:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;

@end
