@class NSString, LiveStreamConnectResultEventSource, NSObject;
@protocol OS_dispatch_source;

@interface LiveStreamSessionEventTracker : NSObject

@property (retain) LiveStreamConnectResultEventSource *connectResultEventSource;
@property BOOL needReportPushStreamResultEvent;
@property long long startedLivePublishTimestamp;
@property long long livePublishErrorCode;
@property long long willStartInteractErrorCode;
@property long long pushStreamResultEventReportTime;
@property (retain) NSObject<OS_dispatch_source> *pushStreamResultTimer;
@property (nonatomic) BOOL streamWillBeKickedOff;
@property (copy) id /* block */ streamLogCallback;
@property BOOL hasFirstConnected;
@property BOOL appActive;
@property (nonatomic) NSString *audio_profile;
@property (copy, nonatomic) id /* block */ mixOnClientBlock;

- (void)startLivePublishWithScene:(id)a0;
- (void)createRtmpConnectBySource:(id)a0;
- (void)updateLivePublishErrorCode:(long long)a0;
- (void)handleRtmpConnectResult:(id)a0;
- (void)stopLivePublishWithScene:(id)a0;
- (void)updatePushStreamResultEventReportTime:(long long)a0;
- (void)liveWillStartInteractStreaming;
- (void)__invalidatePushStreamResultTimer;
- (void)__generatePushStreamResultTimer;
- (void)__reportPushStreamResultWithScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
