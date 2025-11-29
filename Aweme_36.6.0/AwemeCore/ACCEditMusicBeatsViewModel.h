@class ACCBeatSequenceGenerator, NSString;
@protocol ACCEditMusicBeatsViewModelDataSource, ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCEditMusicServiceProtocol, ACCCTRServiceProtocol, ACCSlidesBeatsViewModelDelegate;

@interface ACCEditMusicBeatsViewModel : ACCEditViewModel <ACCSlidesBeatsViewModelProtocol>

@property (retain, nonatomic) ACCBeatSequenceGenerator *beatsGenerator;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playControl;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (copy, nonatomic) id /* block */ beatsItemAction;
@property (weak, nonatomic) id<ACCSlidesBeatsViewModelDelegate> delegate;
@property (weak, nonatomic) id<ACCEditMusicBeatsViewModelDataSource> dataSource;
@property (copy, nonatomic) id /* block */ shouldAutoPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBarItemView;
- (void)refreshBeatsWithMusic:(id)a0 showResultToast:(BOOL)a1 isDefault:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateBeatsArray;
- (long long)fetchItemCount;
- (id)fetchItemButton:(id)a0;
- (void)trackChangeSyncModeEvent:(id)a0;
- (void)refreshBeatsWithMusic:(id)a0 showResultToast:(BOOL)a1 completion:(id /* block */)a2;
- (id)albumBeatCountLimitToastConfig;
- (id)fetchBeatsModeTraceValue;
- (BOOL)shouldTurnOnBeatsModeByDefault;
- (id)beatsBarItem;
- (void)switchMusicBeatsStatus:(id)a0;
- (BOOL)checkBeatsBarItemActionShouldActive:(id *)a0;
- (BOOL)useAlbumBeatMinCountEnable;
- (id)albumBeatCountLimitToastText;
- (void)setMediaContainerViewAnimatedDuration;
- (void)shutDownSwitchNextWithAnimation;
- (void)trackChangeBeatsModeEvent:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
