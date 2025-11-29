@class IESLiveCombineSubject, NSArray, NSMutableDictionary, NSObject, NSString, NSMutableArray, IESLiveSoloKTVApi;
@protocol IESLiveDynamicActivityProvider;

@interface IESSoloKTVMusicManager : NSObject <IESLiveKTVMusicManagerProtocol>

@property (retain, nonatomic) IESLiveSoloKTVApi *api;
@property (retain, nonatomic) NSMutableArray *normalPageModels;
@property (copy, nonatomic) NSArray *multiKTVOrderList;
@property (copy, nonatomic) NSArray *multiKTVSelfOrderedList;
@property (retain, nonatomic) NSMutableArray *hasSungMusicList;
@property (nonatomic) long long hasSungCount;
@property (retain, nonatomic) NSMutableArray *wantListenSelfList;
@property (retain, nonatomic) IESLiveCombineSubject *hasSungMusicCountChanged;
@property (retain, nonatomic) IESLiveCombineSubject *favoriteChanged;
@property (retain, nonatomic) NSMutableDictionary *localMusicDictionary;
@property (retain, nonatomic) NSObject *localMusicDictionaryToken;
@property (retain, nonatomic) id<IESLiveDynamicActivityProvider> activityProvider;
@property (nonatomic) BOOL enableAddSong;
@property (copy, nonatomic) NSString *enterSource;
@property (copy, nonatomic) NSString *tabDescription;
@property (copy, nonatomic) id /* block */ addSongConfirmCheck;
@property (copy, nonatomic) id /* block */ addSongAction;
@property (nonatomic) int source;
@property (retain, nonatomic) IESLiveCombineSubject *addSongSubject;
@property (readonly, copy, nonatomic) NSArray *multiKTVSelfList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageModel;
- (void)favoriteMusicModel:(id)a0 cell:(id)a1 completion:(id /* block */)a2;
- (id)pageModelWithCategory:(id)a0;
- (void)fetchKTVMusicListWithRequestMode:(long long)a0 firstLevelTab:(int)a1 category:(id)a2 inputPageModel:(id)a3 pageNumber:(id)a4 completion:(id /* block */)a5;
- (BOOL)isLocalMusic:(id)a0;
- (id)multiKTVOrderListChangeSignal;
- (id)ktvIMOrderListChangeSignal;
- (void)fetchSungSongListWithLastItemId:(id)a0 completion:(id /* block */)a1;
- (void)addSong:(id)a0 completion:(id /* block */)a1;
- (void)refreshMultiKTVOrderListWithCompletion:(id /* block */)a0;
- (id)multiKTVSelfOrderedListChangeSignal;
- (id)addMusicToListTopWithCategory:(id)a0 musicId:(id)a1 source:(id)a2;
- (id)addMusicToHotTabRecentListTopWitWithCategory:(id)a0 musicId:(id)a1 source:(id)a2;
- (long long)countIndexInLinkedAndOfflineWillSingList;
- (void)syncSearchResult:(id)a0 completion:(id /* block */)a1;
- (void)fetchLiveMusicTabListWithFirstLevelTab:(int)a0 mode:(long long)a1 comletion:(id /* block */)a2;
- (void)showWearHearPhonesHintIfNeed;
- (void)orderSongWithSong:(id)a0 source:(int)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
