@class WAMediaCastingUpnpDiscovery, NSString, WAMediaCastingUpnpServiceCallback, WAMediaCastingUpnpDevice, WAMediaCastingUpnpServicePoll;
@protocol WAMediaCastingUpnpServiceDelegate;

@interface WAMediaCastingUpnpService : NSObject <WAMediaCastingUpnpDiscoveryDelegate, WAMediaCastingUpnpServicePollDelegate>

@property (retain, nonatomic) WAMediaCastingUpnpDiscovery *discovery;
@property (nonatomic) unsigned long long videoPlayerState;
@property (retain, nonatomic) WAMediaCastingUpnpServicePoll *poll;
@property (nonatomic) unsigned long long transportInfoRetryCount;
@property (retain, nonatomic) NSString *currentURI;
@property (nonatomic) BOOL isLive;
@property (retain, nonatomic) WAMediaCastingUpnpServiceCallback *callback;
@property (nonatomic) BOOL shouldResumePollingWhenAppear;
@property (weak, nonatomic) id<WAMediaCastingUpnpServiceDelegate> delegate;
@property (readonly, nonatomic) BOOL isSearching;
@property (retain, nonatomic) WAMediaCastingUpnpDevice *currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)service;
+ (void)runOnMainQueue:(id /* block */)a0;

- (void)dealloc;
- (void)search;
- (void)cancelSearch;
- (void)cancelRequestCallbackAndStopPolling;
- (void)playWithURI:(id)a0 startPosition:(double)a1 isLive:(BOOL)a2 completion:(id /* block */)a3;
- (void)playWithCompletion:(id /* block */)a0;
- (void)pauseWithCompletion:(id /* block */)a0;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)seekWithPosition:(double)a0 completion:(id /* block */)a1;
- (void)setVolume:(double)a0 completion:(id /* block */)a1;
- (void)handlePlayComplete:(id)a0;
- (void)handleSeekComplete:(id)a0;
- (void)handleStopComplete:(id)a0;
- (void)handlePauseComplete:(id)a0;
- (void)handleTransportInfoReturn:(unsigned long long)a0 error:(id)a1;
- (void)handlePositionInfoReturn:(double)a0 duration:(double)a1 error:(id)a2;
- (void)handlePollRetryCountLimit;
- (void)handleMediaInfoReturn:(id)a0 error:(id)a1;
- (void)exit;
- (void)handleVideoAppear;
- (void)handleVideoDisappear;
- (void)WAMediaCastingUpnpDiscoveryDidStart:(id)a0;
- (void)WAMediaCastingUpnpDiscoveryDidFinished:(id)a0;
- (void)WAMediaCastingUpnpDiscoveryDidDeviceChanged:(id)a0;
- (void)pollShouldBegin:(id)a0;
- (void)stopPoll;
- (void)startPoll;
- (void).cxx_destruct;

@end
