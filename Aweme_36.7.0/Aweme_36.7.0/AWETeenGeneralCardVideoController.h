@class NSString, UIImageView, AWETeenClassicVideoController, UIView, AWETeenGeneralCardVideoModel, AWETeenSlidesView;
@protocol AWETeenGeneralVideoInteractionViewProtocol;

@interface AWETeenGeneralCardVideoController : UIViewController <AWETeenVideoContainerProtocol>

@property (retain, nonatomic) AWETeenGeneralCardVideoModel *videoModel;
@property (retain, nonatomic) AWETeenClassicVideoController *videoController;
@property (retain, nonatomic) UIView<AWETeenGeneralVideoInteractionViewProtocol> *interactionView;
@property (retain, nonatomic) UIImageView *richContentIcon;
@property (retain, nonatomic) AWETeenSlidesView *richContentView;
@property (nonatomic) long long vcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })aspectFitSizeWithModel:(id)a0 constraintWidth:(double)a1;

- (id)awemeModel;
- (id)getVideoController;
- (void)p_prepareForDisplay;
- (void)configWithModel:(id)a0;
- (void)p_silentUpdate;
- (void)p_configVideoWithModel:(id)a0;
- (void)p_configInteractionWithModel:(id)a0;
- (void)replaceVideoPlayer:(id)a0;
- (void)uninstallVideoController:(BOOL)a0 installNew:(BOOL)a1;
- (id)getSliderView;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:(long long)a0;
- (double)displayedPercentage;
- (void)resetManualState;
- (id)initWithInteractionView:(id)a0;
- (void)p_configRichContentIfNeeded;
- (void)p_setRichViewIfNeed;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)viewDidLayoutSubviews;
- (void)stop;
- (void)reset;
- (void)seekToTime:(double)a0;
- (void)viewDidLoad;
- (double)currentPlaybackTime;
- (void)dealloc;

@end
