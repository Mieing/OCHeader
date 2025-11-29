@class AWETheaterMoreFeedSectionItem, AWETheaterMoreFeedMetaView, NSDictionary, AWETheaterPageContext, AWETheaterPlayVideoViewController, AWETheaterMoreFeedControlView, AWETheaterMoreFeedCoverView, AWEVideoScreenRecordingBlocker, AWETheaterTracker;

@interface AWETheaterMoreFeedSectionCell : UICollectionViewCell

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterMoreFeedSectionItem *sectionItem;
@property (retain, nonatomic) AWETheaterPlayVideoViewController *videoController;
@property (retain, nonatomic) AWETheaterMoreFeedControlView *controlView;
@property (retain, nonatomic) AWETheaterMoreFeedCoverView *coverView;
@property (retain, nonatomic) AWETheaterMoreFeedMetaView *metaView;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEVideoScreenRecordingBlocker *screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;
@property (nonatomic) BOOL isCollecting;
@property (nonatomic) BOOL isAppointing;
@property (copy, nonatomic) id /* block */ moreFeedClick;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (copy, nonatomic) id /* block */ collectClick;
@property (copy, nonatomic) id /* block */ detailSchemaCallBack;

+ (Class)aAWETheaterViewControllerCommonAdapterClass;

- (void)updateLogExtraDict:(id)a0;
- (void)bindObserver;
- (BOOL)isStop;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void)handlePushPermissionChangedWithNotification:(id)a0;
- (void)showPushAlertIfNeed;
- (void)trackFavouriteVideo:(id)a0 isCancel:(BOOL)a1;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)recordPlaybackTime;
- (double)calculateStartTime;
- (BOOL)shouldPaymentChargePreviewConfig;
- (void)resetPlaybackTime;
- (void)trackHighlightPlay;
- (void)configVideoController:(id)a0;
- (void)showCover;
- (void)trackShowAppointment:(BOOL)a0;
- (void)trackShowFavoriteVideo:(BOOL)a0;
- (void)seekPlaybackTime;
- (void)gotoTheaterDetailPage;
- (void)gotoPlayletDetailPage;
- (void)didChangeAppointmentStatus:(id)a0;
- (void)collectPlaylet;
- (void)collectLongVideoAlbum;
- (void)trackClickAppointment;
- (void)changeAppointmentStatus:(id)a0;
- (void)trackClickAppointmentResult:(long long)a0;
- (id)appointmentParams;
- (void)handlePlayerTap;
- (void)handleMetaViewTap;
- (void)clickCollection;
- (void)clickAppointmentButton;
- (void)trackClickVolumeButton;
- (void)trackVideoPlayFinish;
- (void)trackShowVolumeButton;
- (void)hiddenCover;
- (id)currentTrailStatus;
- (void)checkShouldShowPaymentFinishView;
- (void)updateSoundImageView;
- (void)gotoLongVideoDetailPage;
- (void)trackFinishPaymentTrialEnd;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)initConstraints;
- (void)handleTap;

@end
