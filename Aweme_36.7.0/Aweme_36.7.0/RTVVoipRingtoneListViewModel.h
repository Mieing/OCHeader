@class NSArray, NSString, NSMutableSet, RTVVoipRingtoneItemViewModel, NSDictionary;
@protocol RTVVoipRingtoneListDataSourceProtocol, RTVVoipRingtoneComponentInterface, RTVVoipRingtonePlayerComponentInterface, RTVVoipRingtoneListViewModelDelegate;

@interface RTVVoipRingtoneListViewModel : NSObject <RTVVoipRingtoneListViewModelProtocol>

@property (nonatomic) long long uiState;
@property (nonatomic) BOOL autoLoaded;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *trackedIds;
@property (weak, nonatomic) RTVVoipRingtoneItemViewModel *loadingItemViewModel;
@property (nonatomic) long long panelStartShowTimeStamp;
@property (retain, nonatomic) id<RTVVoipRingtoneListDataSourceProtocol> dataSource;
@property (retain, nonatomic) id<RTVVoipRingtonePlayerComponentInterface> ringtonePlayer;
@property (retain, nonatomic) id<RTVVoipRingtoneComponentInterface> ringtoneComponent;
@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL defaultSelected;
@property (weak, nonatomic) id<RTVVoipRingtoneListViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *emptyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (id)itemsFromMusicList:(id)a0;
- (id)selectedMusic;
- (BOOL)contextMenuEnabled:(id)a0;
- (id)itemWithMusic:(id)a0;
- (void)selectMusicItem:(id)a0;
- (void)downloadMusicAtIndex:(unsigned long long)a0;
- (void)selectMusicItemAtIndex:(unsigned long long)a0;
- (void)toggleMusicFavorite:(id)a0 index:(unsigned long long)a1;
- (id)contextMenuActionsWithItem:(id)a0;
- (void)traceRingtoneApplyResult:(BOOL)a0;
- (void)triggerApplyMusic:(id)a0 isApply:(BOOL)a1;
- (void)autoSelectCurrentUserRingtoneIfNeed;
- (void)reloadData;
- (void).cxx_destruct;
- (void)fetchData;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;

@end
