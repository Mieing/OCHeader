@class NSString, AWEDemaciaChapterProgressSlider;

@interface AWEPlayInteractionChapterProgressController : AWEPlayInteractionBaseController <AWEChapterSwitchChangedMessage, AWEPadUIAdaptionViewTransitionObserver>

@property (retain, nonatomic) AWEDemaciaChapterProgressSlider *chapterProgressBar;
@property (nonatomic) BOOL shouldShowChapter;
@property (copy, nonatomic) id /* block */ progressSliderHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (BOOL)chapterProgressViewOptEnabled;

- (void)setHide:(BOOL)a0;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)onUpdatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)removeControllerFromSuperView;
- (id)aAWEPadBizUIAdapter;
- (double)calcuteEntryTopOffset:(BOOL)a0;
- (BOOL)shouldMoveUpChapterProgress;
- (BOOL)optimizePanelHeight;
- (void)switchChapterProgress:(BOOL)a0 withModel:(id)a1;
- (BOOL)optimizeChapterProgressSlider;
- (void)unbindContext;
- (void)updateChapterProgressBarPosition:(BOOL)a0;
- (void)removeChapterProgressBar;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupContext;
- (void)willDisplay;

@end
