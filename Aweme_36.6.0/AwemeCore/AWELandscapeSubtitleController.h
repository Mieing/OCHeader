@class NSString, AWEFeedSubtitleContainerView;

@interface AWELandscapeSubtitleController : AWELandscapeInteractionBaseController <AWEFeedSubtitleMessage>

@property (retain, nonatomic) AWEFeedSubtitleContainerView *subtitleContainer;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 onSubtitleInfoCallBack:(id)a1;
- (void)didEnterLandscape;
- (void)playerBeforePrepareToPlay:(id)a0;
- (void)updateLayoutWithAnimationOffset:(double)a0 position:(long long)a1;
- (void)changeSubtitleSwitchStatus:(BOOL)a0;
- (void)changeSubtitleSelectedLanguageID:(long long)a0;
- (BOOL)shouldShowSubtitleView;
- (void)willExitLandscape;
- (void)willEnterSplitScreen:(BOOL)a0 movePoint:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2;
- (BOOL)enableSubtitleView;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)currentModel;

@end
