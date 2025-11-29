@class NSString, UIImageView, SightIconView, UILabel, WCAdvertiseSphereView;

@interface WCTimeLineAdSphereCardView : WCContentItemBaseView <WCAdvertiseSphereViewDelegate>

@property (retain, nonatomic) WCAdvertiseSphereView *sphereView;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) UIImageView *weAppLogo;
@property (retain, nonatomic) UILabel *weAppTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)dealloc;
- (void)onApplicationDidReceiveMemoryWarning:(id)a0;
- (id)fetchCurrentSnapshot;
- (id)fetchOriginSnapshot;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDecelerating;
- (void)tryToStartSphereMonitoring;
- (void)tryToStopSphereMonitoring;
- (void)tryToResetSphereMotionData;
- (void)addMediaViewForItem:(id)a0;
- (void)addSpherePhotoViewWithMediaItem:(id)a0;
- (void)addTopRight360Icon;
- (void)addTitleAndDescriptionForItem:(id)a0;
- (void)genWeAppLogoAndTip;
- (id)genLabelWithFont:(double)a0 text:(id)a1;
- (void)resourceLoading;
- (void)resourceDidLoad;
- (void)resourceDidFailed;
- (id)getBackGroundColorWhenLoading;
- (void)resourceLoadingWithProgress:(double)a0;
- (void)initSightIconView;
- (void)tryToResumeLoadingView;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onFullCoverButtonClicked;
- (void)onPanGestureEnd;
- (void).cxx_destruct;

@end
