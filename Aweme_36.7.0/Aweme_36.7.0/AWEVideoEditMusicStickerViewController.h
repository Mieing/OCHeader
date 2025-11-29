@class NSString, AWEASSSearchMusicViewController, AWEVideoPublishViewModel, AWEAudioClipFeatureManager, AWEASSMusicNavView, NSObject, AWEASSMusicListViewController, UILabel;
@protocol ACCCommonSearchBarProtocol;

@interface AWEVideoEditMusicStickerViewController : UIViewController <ACCCommonSearchBarDelegate, ACCEditLyricStickerMusicSelectPageProtocol>

@property (nonatomic) BOOL existsMusic;
@property (retain, nonatomic) AWEASSMusicNavView *navView;
@property (retain, nonatomic) NSObject<ACCCommonSearchBarProtocol> *searchBar;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) AWEASSMusicListViewController *listVC;
@property (retain, nonatomic) AWEASSSearchMusicViewController *searchVC;
@property (nonatomic) double startOffset;
@property (retain, nonatomic) AWEAudioClipFeatureManager *clipManager;
@property (nonatomic) BOOL idleTimerDisableHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ didClipRange;
@property (copy, nonatomic) id /* block */ suggestSelectedChangeBlock;
@property (copy, nonatomic) NSString *pageSource;

- (id)initWithRepository:(id)a0;
- (void)showOnViewController:(id)a0 startOffset:(double)a1 completion:(id /* block */)a2;
- (void)idleTimerDisableRestore;
- (void)setupViewComponents;
- (void)_readCacheAndFetchRecommendMusic;
- (void)idleTimerDisable;
- (void)_clearSearch;
- (void)_changeSearchWord:(id)a0;
- (void)_enterSearch;
- (void)removeFromParentViewControllerAnimated;
- (id)_filterMusicWithMusicList:(id)a0;
- (id)p_transformMusicListToCollectionData:(id)a0;
- (void)_closeButtonClicked:(id)a0;
- (void)_exitSearch;
- (void)_checkApplyMusicWithMusicModel:(id)a0 error:(id)a1;
- (void)p_showClipPanelWithMusic:(id)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)_pause;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_startSearch;

@end
