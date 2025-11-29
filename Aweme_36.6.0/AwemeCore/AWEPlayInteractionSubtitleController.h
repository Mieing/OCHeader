@class NSString, AWEFeedSubtitleContainerView;

@interface AWEPlayInteractionSubtitleController : AWEPlayInteractionNewBaseController <AWEFeedSubtitleMessage>

@property (retain, nonatomic) AWEFeedSubtitleContainerView *subtitleContainer;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)onPlayer:(id)a0 onSubtitleInfoCallBack:(id)a1;
- (BOOL)enableSubtitle;
- (void)changeSubtitleSwitchStatus:(BOOL)a0;
- (void)changeSubtitleSelectedLanguageID:(long long)a0;
- (BOOL)shouldShowSubtitleView;
- (void)prepareForDisplay;
- (id)playerViewController;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)willDisplay;

@end
