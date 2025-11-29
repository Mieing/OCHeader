@class AWEMusicPlayEventService, NSArray, AWEMusicDSPEventModel, NSString;

@interface AWEMusicMainFeedMusicServiceManager : NSObject <AWEMusicServiceDelegate>

@property (copy, nonatomic) NSArray *serviceArray;
@property (retain, nonatomic) AWEMusicPlayEventService *musicEventService;
@property (retain, nonatomic) AWEMusicPlayEventService *secondaryEventService;
@property (copy, nonatomic) NSArray *eventServiceArray;
@property (weak, nonatomic) id lastPlayService;
@property (weak, nonatomic) id secondaryMusicService;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicServiceWillPlay:(id)a0;
- (void)videoPlayStart;
- (void)videoPlayEnd;
- (void)enterMusicScene;
- (id)initWithMusicService:(id)a0 secondaryMusicService:(id)a1;
- (void)secondaryVideoPlayStart;
- (void)secondaryVideoPlayEnd;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)setPageName:(id)a0;

@end
