@class IESSoloKTVMusicManager, NSString, HTSEventContext, IESLiveSongPanelSoloKTVStore, NSNumber, IESLiveSoloKTVApi;

@interface IESLiveSoloKTVHomeModel : NSObject <IESLiveKTVSongListActions>

@property (retain, nonatomic) IESLiveSoloKTVApi *api;
@property (nonatomic) long long sungSongCount;
@property (copy, nonatomic) NSString *topSongId;
@property (copy, nonatomic) NSString *enterSource;
@property (nonatomic) int source;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) IESSoloKTVMusicManager *musicManager;
@property (retain, nonatomic) IESLiveSongPanelSoloKTVStore *soloKTVStore;
@property (nonatomic) long long defaultSelectedFirstLevelIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)soloKTVEnterService;
- (void)requestFirstOrderSong;
- (void)setupDataWithSource:(id)a0 schemaParams:(id)a1;
- (id)initWithSource:(id)a0 schemaParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end
