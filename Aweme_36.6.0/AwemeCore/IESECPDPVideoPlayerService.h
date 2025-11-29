@class NSString;
@protocol IESECPDPVideoPlayerInitializerProtocol;

@interface IESECPDPVideoPlayerService : NSObject <IESECPDPVideoPlayerServiceProtocol>

@property (retain, nonatomic) id<IESECPDPVideoPlayerInitializerProtocol> playerInitializer;
@property (nonatomic) BOOL shouldCallLoadPlayerEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createBackgroundAppPlayerViewModel;
- (id)createMiniVideoViewModel;
- (id)createLiveFloatViewModel;
- (id)createFeedVideoViewModel;
- (id)createPlayerViewWithConfig:(id)a0;
- (void)tryLoadCreatedPlayerEngine;
- (id)createHeaderSmallVideoViewModel;
- (id)createReplayFloatEntryView;
- (void)initPlayerEngineWithPlayer:(id)a0;
- (void).cxx_destruct;

@end
