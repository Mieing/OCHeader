@class NSArray, LunaPlayEventService, AWEMusicDSPEventModel, NSString;
@protocol MusicService;

@interface LunaMainFeedMusicServiceManager : NSObject <AWEMusicServiceDelegate>

@property (copy, nonatomic) NSArray *serviceArray;
@property (retain, nonatomic) LunaPlayEventService *musicEventService;
@property (retain, nonatomic) LunaPlayEventService *secondaryEventService;
@property (copy, nonatomic) NSArray *eventServiceArray;
@property (weak, nonatomic) id secondaryMusicService;
@property (nonatomic) BOOL isCustomUser;
@property (weak, nonatomic) id<MusicService> lastPlayService;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicServiceWillPlay:(id)a0;
- (void)enterMusicScene;
- (id)initWithMusicService:(id)a0 secondaryMusicService:(id)a1 isCustomUser:(BOOL)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)setPageName:(id)a0;

@end
