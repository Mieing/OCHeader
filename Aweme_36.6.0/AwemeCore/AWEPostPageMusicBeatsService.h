@class ACCBeatSequenceGenerator;
@protocol AWEPostPageServiceCoordinator, ACCSequenceEditServiceProtocol, AWEPostPageContext;

@interface AWEPostPageMusicBeatsService : NSObject

@property (retain, nonatomic) ACCBeatSequenceGenerator *beatsGenerator;
@property (nonatomic) BOOL isMusicBeatOn;
@property (weak, nonatomic) id<AWEPostPageContext> context;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> editService;
@property (weak, nonatomic) id<AWEPostPageServiceCoordinator> serviceCoordinator;

- (BOOL)isDefaultAutoBeats;
- (void)refreshBeatsWithMusic:(id)a0 showResultToast:(BOOL)a1;
- (void)musicBeatsdidFetchBeats:(id)a0;
- (id)initWithContext:(id)a0 serviceCoordinator:(id)a1;
- (void)initBeats;
- (void).cxx_destruct;
- (long long)itemCount;

@end
