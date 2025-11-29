@class NSString, ACCEditMusicBeatsViewModel;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCEditMusicServiceProtocol;

@interface ACCImageAlbumBeatsComponent : ACCFeatureComponent <ACCEditImageAlbumMixedMessageProtocolD, ACCSlidesBeatsViewModelDelegate, ACCEditMusicBeatsViewModelDataSource, ACCPanelViewDelegate, ACCImageAlbumListChangeProtocol>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) ACCEditMusicBeatsViewModel *vm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayTime;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)onImagePlayerWillScrollToIndex:(long long)a0 withAnimation:(BOOL)a1 isByAutoTimer:(BOOL)a2;
- (void)onImageAlbumContentCountDidChanged:(id)a0;
- (void)musicBeatsViewModel:(id)a0 didUpdateWithBeatsOn:(BOOL)a1 beatsResult:(unsigned long long)a2 barItemEnabled:(BOOL)a3;
- (void)musicBeatsViewModel:(id)a0 didFetchBeats:(id)a1;
- (id)beatsModeTraceValue;
- (void)beatsBarItemAction;
- (void)startAutoPlayForBeatsOn;
- (void)subscribeMusicSignal;
- (void)restoreAutoPlay;
- (void).cxx_destruct;
- (long long)itemCount;

@end
