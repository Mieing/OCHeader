@class AWEMusicPlayEventService, NSString, AWEMusicMainFeedViewController, AWEMusicStreamingQueueHandler;
@protocol MusicService;

@interface AWEMusicShareMusicService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate, AWEMusicShareServiceProtocol>

@property (copy, nonatomic) NSString *musicId;
@property (weak, nonatomic) id<MusicService> musicService;
@property (weak, nonatomic) AWEMusicMainFeedViewController *playerVC;
@property (weak, nonatomic) AWEMusicStreamingQueueHandler *queueHandler;
@property (retain, nonatomic) AWEMusicPlayEventService *eventService;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL releaseWhenExit;

+ (id)convert:(id)a0 queueNane:(id)a1;
+ (id)pushDspVCWithWithMusicService:(id)a0 eventService:(id)a1 musicId:(id)a2;
+ (void)openDspWithMusicService:(id)a0 eventService:(id)a1 musicId:(id)a2 completion:(id /* block */)a3;

- (void)feedViewDidLoad:(id)a0;
- (BOOL)hasMoreOfScene:(id)a0;
- (id)collectToast:(BOOL)a0;
- (id)initWithMusicId:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
