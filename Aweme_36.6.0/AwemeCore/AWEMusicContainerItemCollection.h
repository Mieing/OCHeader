@class AWEMusicCollectionViewController, AWEUserModel, NSString;
@protocol MusicService, AWEMusicContainerDelegateProtocol;

@interface AWEMusicContainerItemCollection : NSObject <AWEMusicContainerItemProtocol>

@property (retain, nonatomic) AWEMusicCollectionViewController *innerVC;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) BOOL canAutoStartPlay;
@property (nonatomic) BOOL canShowPrivacyPopGuide;
@property (nonatomic) BOOL canAutoCreatePlaylist;
@property (weak, nonatomic) id<AWEMusicContainerDelegateProtocol> containerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)tabType;
- (id)topNavBarTitle;
- (BOOL)needSeperateLine;
- (id)miniPage;
- (id)initWithUserModel:(id)a0 musicService:(id)a1 eventModel:(id)a2 isMiniLuna:(BOOL)a3;
- (id)initWithUserModel:(id)a0 musicService:(id)a1 eventModel:(id)a2;
- (id)initWithUserModel:(id)a0 musicService:(id)a1;
- (void).cxx_destruct;
- (id)viewController;
- (BOOL)isDarkTheme;
- (void)setAppearing:(BOOL)a0;
- (id)tabName;

@end
