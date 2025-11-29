@class AWEMiniLunaMyCollectionViewController, NSString, AWEMiniLunaContext, AWEUserModel;
@protocol MusicService, AWEMusicContainerDelegateProtocol;

@interface AWEMiniLunaContainerItemMyCollection : NSObject <AWEMusicContainerItemProtocol>

@property (retain, nonatomic) AWEMiniLunaMyCollectionViewController *innerVC;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMiniLunaContext *context;
@property (nonatomic) BOOL canShowPrivacyPopGuide;
@property (nonatomic) BOOL canAutoCreatePlaylist;
@property (nonatomic) BOOL canAutoPlayPlaylist;
@property (nonatomic) BOOL canShowLunaSKOverlay;
@property (weak, nonatomic) id<AWEMusicContainerDelegateProtocol> containerDelegate;
@property (nonatomic) unsigned long long highlightPlaylistCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)tabType;
- (void)checkShowCreatePlaylist;
- (id)topNavBarTitle;
- (BOOL)needSeperateLine;
- (id)miniPage;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)viewController;
- (BOOL)isDarkTheme;
- (void)setAppearing:(BOOL)a0;
- (id)tabName;

@end
