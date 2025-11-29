@class NSString, AWEMiniLunaContainerViewController;
@protocol MusicService;

@interface AWEMusicMiniLunaShareService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate, AWEMusicShareServiceProtocol>

@property (copy, nonatomic) NSString *musicId;
@property (weak, nonatomic) id<MusicService> musicService;
@property (weak, nonatomic) id<MusicService> secondaryMusicService;
@property (weak, nonatomic) AWEMiniLunaContainerViewController *playerVC;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL releaseWhenExit;

+ (id)pushMiniVCWithWithMusicService:(id)a0 secondaryMusicPlayer:(id)a1 isVideo:(BOOL)a2 extraParams:(id)a3 publicParams:(id)a4 musicId:(id)a5;
+ (void)openMiniLunaWithMusicService:(id)a0 secondaryMusicPlayer:(id)a1 musicId:(id)a2 isVideo:(BOOL)a3 extraParams:(id)a4 publicParams:(id)a5 completion:(id /* block */)a6;

- (void)feedViewDidLoad:(id)a0;
- (BOOL)hasMoreOfScene:(id)a0;
- (id)initWithMusicId:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
