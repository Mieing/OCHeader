@class NSString, IESLiveKTVRequestButton;
@protocol IESLiveCompoundSubscription;

@interface IESLiveKTVListenRecommendCell : IESLiveSongBaseCell <IESLiveKTVAddSongAnimationViewContext>

@property (retain, nonatomic) IESLiveKTVRequestButton *listenButton;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForItem:(id)a0;

- (void)renderWithItem:(id)a0;
- (void)refreshButtonUI;
- (void)updateWantListenInfoWithWantListenCount:(long long)a0;
- (id)favoriteStartPostionView;
- (id)orderStartPostionView;
- (void)p_didClickedWantListen;
- (void)p_addFavoriteStatusChangeObserverIfNeeded;
- (void)p_relayoutUIAndHighLightSearchMatchIfNeededWithItem:(id)a0;
- (void)updateWantListenInfoWithListenRecmmendItem:(id)a0;
- (BOOL)isInSelfWantListen;
- (void)p_didClickedFavoriteButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)coverImage;

@end
