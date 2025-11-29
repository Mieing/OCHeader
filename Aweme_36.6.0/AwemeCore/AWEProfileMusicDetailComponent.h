@class NSString, UIViewController;
@protocol AWEOriginalSoundTrackViewControllerProtocol;

@interface AWEProfileMusicDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *ostVC;
@property (retain, nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *vsOriginalSoundVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (id)musicianTabModel;
- (id)originalSoundTabModel;
- (BOOL)p_shouldShowMusicTab;
- (BOOL)p_shouldShowOriginalSoundTab;
- (id)titleForMusicianTab;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;

@end
