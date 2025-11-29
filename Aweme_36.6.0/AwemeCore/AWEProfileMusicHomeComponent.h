@class NSString, UIViewController;
@protocol AWEOriginalSoundTrackViewControllerProtocol;

@interface AWEProfileMusicHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *ostVC;
@property (retain, nonatomic) UIViewController<AWEOriginalSoundTrackViewControllerProtocol> *vsOriginalSoundVC;
@property (nonatomic) BOOL isMusicEntranceChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
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
- (void)p_musicEntranceSettingDidChanged:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (void)viewWillAppear;
- (void)viewDidLoad;

@end
