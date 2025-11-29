@class WCFinderStreamLoadingState, NSString, MMListenCategoryItem, FinderMusicBaikeSummary, NSArray, WCFinderStreamProfileMusicPlaylist, FinderLiteAppParam;
@protocol WCFinderStreamProfileMusicPlaylistDelegate;

@interface WCFinderMusicPlaylistTabPageModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) MMListenCategoryItem *musicCategory;
@property (retain, nonatomic) FinderMusicBaikeSummary *baikeSummary;
@property (weak, nonatomic) id<WCFinderStreamProfileMusicPlaylistDelegate> delegate;
@property (readonly, nonatomic) WCFinderStreamLoadingState *state;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) WCFinderStreamProfileMusicPlaylist *albumSection;
@property (retain, nonatomic) FinderLiteAppParam *postMusicLiteAppParams;
@property (retain, nonatomic) FinderLiteAppParam *manageMusicLiteAppParams;

+ (BOOL)shouldDisplay:(id)a0;
+ (BOOL)allowLimitMode;
+ (int)tabId;
+ (id)overviewSectionTypes;
+ (id)idForCategory:(id)a0;
+ (id)listenIdForMusicItem:(id)a0;

- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)_updateMusicOverviewSection:(BOOL)a0;
- (id)init;
- (id)initWithUserName:(id)a0;
- (id)displayName;
- (id)viewPageClassName;
- (int)tingPlayScene;
- (void)requestNextPageData:(BOOL)a0;
- (BOOL)sectionHasData:(id)a0;
- (void)onClickPlaylist:(id)a0;
- (void)onClickMusic:(id)a0;
- (void)onClickMusic:(id)a0 scene:(int)a1;
- (void)onClickAllMusic;
- (void)onClickBaikeMusic;
- (void)fetchPlayListWithCompletion:(id /* block */)a0;
- (void)reloadPage;
- (id)reportParamsBlock;
- (void)bindSDKReportAlubmCard:(id)a0 album:(id)a1;
- (void)bindSDKReportAlubmMore:(id)a0 sec:(id)a1;
- (void)bindSDKReportMusic:(id)a0 view:(id)a1;
- (void)bindSDKReportAllMusicView:(id)a0;
- (void).cxx_destruct;

@end
