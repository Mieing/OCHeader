@class AWEBinding;
@protocol ACCMusicModelProtocol;

@interface ACCMusicRecommendListViewModel : ACCMusicListViewModel

@property (retain, nonatomic) id<ACCMusicModelProtocol> reversedMusic;
@property (retain, nonatomic) AWEBinding *itemsBinding;
@property (nonatomic) BOOL shouldAutoSelectItem;

- (id)musicSelectedFrom;
- (id)itemsFromMusicList:(id)a0;
- (BOOL)contextMenuEnabled:(id)a0;
- (id)initWithRepository:(id)a0 useCase:(id)a1 publishModel:(id)a2 bizHandler:(id)a3 musicFeatureAPI:(id)a4;
- (id)contextMenuActionsWithItem:(id)a0;
- (void)didTriggerMenu:(id)a0 withItem:(id)a1;
- (void).cxx_destruct;
- (id)title;
- (id)identifier;
- (void)setup;

@end
