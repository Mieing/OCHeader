@class NSString, WCFinderStreamLoadingState, WCFinderStreamProfileMusicPlaylist;
@protocol WCFinderStreamAlbumTabPageModelDelegate;

@interface WCFinderStreamAlbumTabPageModel : WCFinderStreamProfilePageModel <WCFinderStreamProfileMusicPlaylistPageDelegate>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderStreamProfileMusicPlaylist *section;
@property (weak, nonatomic) id<WCFinderStreamAlbumTabPageModelDelegate> delegate;
@property (retain, nonatomic) WCFinderStreamLoadingState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisplay:(id)a0;
+ (int)tabId;

- (void)dealloc;
- (id)categoryItems;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)_fetchAlbumData;
- (void)onMusicPageDataFilled:(id)a0;
- (void)requestNextPageData;
- (void)bindSDKReport:(id)a0 forCategory:(id)a1;
- (void)onPlayList:(id)a0 appendDataAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)reportParamsBlock;
- (void).cxx_destruct;

@end
