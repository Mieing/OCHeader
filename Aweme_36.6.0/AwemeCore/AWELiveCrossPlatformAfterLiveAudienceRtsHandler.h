@class HTSEventContext, AWELiveRTSEndLiveService, AWELiveSwiftBaseService, EndingPageResponseData, NSDictionary, _TtC16AWELiveSwiftImpl21RelaxEndLiveContainer, IESLiveNewAudienceRelaxPerformanceLogger, HTSLiveUser;

@interface AWELiveCrossPlatformAfterLiveAudienceRtsHandler : AWELiveSwiftImpl.RtsJsonUtils {
    void /* unknown type, empty encoding */ appProps;
    void /* unknown type, empty encoding */ liveFetchService;
}

@property (nonatomic, retain) HTSEventContext *traceContext;
@property (nonatomic, retain) NSDictionary *params;
@property (nonatomic, retain) id /* block */ closeVCBlock;
@property (nonatomic, retain) id room;
@property (nonatomic, retain) _TtC16AWELiveSwiftImpl21RelaxEndLiveContainer *relaxContainer;
@property (nonatomic, retain) IESLiveNewAudienceRelaxPerformanceLogger *performanceLogger;
@property (nonatomic) BOOL tryToRetain;
@property (nonatomic) long long newCountTime;
@property (nonatomic, retain) AWELiveRTSEndLiveService *endLiveService;
@property (nonatomic, readonly) HTSLiveUser *actualOwner;
@property (nonatomic, retain) EndingPageResponseData *endLiveResponse;
@property (nonatomic, readonly) AWELiveSwiftBaseService *baseService;

- (void)didSetAttachingDIContext;
- (id)getAfterLiveAudienceCrossInterface;
- (void)updateWithInitStateWithTraceContext:(id)a0 params:(id)a1 room:(id)a2 performanceLogger:(id)a3 closeVCBlock:(id /* block */)a4;
- (void)updateWithCountTimeWithCountTime:(long long)a0;
- (void)retainCountDown;
- (void)initRealComponent;
- (id)relaxComponentInit;
- (void)updateRoomWithRoom:(id)a0;
- (void)gotoLiveRoomWithRoom:(id)a0 :(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
