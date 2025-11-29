@class NSString, AWEFeedSubtitleContainerView;

@interface AFDPureModePageSubtitleController : AWEBaseController <AWEFeedSubtitleMessage, AFDPureModePageControllerProtocol>

@property (retain, nonatomic) AWEFeedSubtitleContainerView *subtitleContainer;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)player:(id)a0 subtitleInfoCallBack:(id)a1;
- (BOOL)enableSubtitle;
- (void)changeSubtitleSwitchStatus:(BOOL)a0;
- (void)changeSubtitleSelectedLanguageID:(long long)a0;
- (BOOL)shouldShowSubtitleView;
- (void)updateSubtitleContainer;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
