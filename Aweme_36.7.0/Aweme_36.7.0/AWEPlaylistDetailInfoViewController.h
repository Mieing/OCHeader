@class NSString, AWEPlaylistInfoModel, UIImageView, AWEUIButton, UIButton, UIVisualEffectView, UILabel, UIScrollView;

@interface AWEPlaylistDetailInfoViewController : AWEMiniLunaBaseViewController <AWEMusicDispatchPlaylistProtocol>

@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEUIButton *editButton;
@property (retain, nonatomic) AWEUIButton *saveButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) BOOL isOfflineMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaylistInfo:(id)a0;
- (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
- (void)editPlaylist:(id)a0;
- (void)savePlaylistCover:(id)a0;
- (void)handleBack:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
