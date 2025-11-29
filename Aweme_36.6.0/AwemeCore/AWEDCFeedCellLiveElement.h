@class NSString, UIImageView, LOTAnimationView, AWEGradientView, UILabel, UIView;
@protocol AWELivePreviewStreamViewProtocol;

@interface AWEDCFeedCellLiveElement : AWEDCFeedBaseCellElement <AWELivePreviewStreamViewDelegate>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) LOTAnimationView *livingIcon;
@property (retain, nonatomic) AWEGradientView *livingIconContainerView;
@property (retain, nonatomic) UILabel *livingIconLabel;
@property (retain, nonatomic) UIView *livingActiveContainerView;
@property (retain, nonatomic) UIView<AWELivePreviewStreamViewProtocol> *livePlayerView;
@property (retain, nonatomic) UILabel *adTitleLabel;
@property (nonatomic) BOOL alreadyEnterLive;
@property (retain, nonatomic) LOTAnimationView *livingActiveIcon;
@property (retain, nonatomic) UILabel *liveEndLabel;
@property (nonatomic) BOOL isCheckingRoom;
@property (nonatomic) double lastRequestRoomStatusTime;
@property (nonatomic) double livingActiveStartPlayTime;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (long long)elementStyle;
+ (double)imageDisplayRatioWithSize:(struct CGSize { double x0; double x1; })a0 cutType:(long long)a1;

- (void)cellWillDisplay;
- (void)previewStreamViewStartPlay:(id)a0;
- (void)previewStreamViewPlayFinished:(id)a0;
- (void)trackPreviewPlayError;
- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (id)classNameWithReferString;
- (void)loadCoverImageView;
- (void)deleteEndedLivedRoom:(id)a0;
- (void)checkRoomStatus;
- (void)showAdTitleLabelIfNeeded;
- (void)trackLiveWindowDurationV2IfNeeded;
- (id)getRoomID;
- (void)stopLivePlayer;
- (void)stopPlayLive;
- (void)checkRoomResponse:(id)a0;
- (id)coverImageViewBackgroundColor;
- (id)compressAndCropImageIfNeededWithImage:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)resignActive;
- (void)reset;
- (void)dealloc;
- (void)setupUI;
- (id)activeView;
- (id)getUserId;

@end
