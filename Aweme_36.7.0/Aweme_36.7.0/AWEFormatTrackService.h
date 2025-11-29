@class NSMutableDictionary, NSDictionary, IESLiveTraceService, NSString;

@interface AWEFormatTrackService : HTSService <AWEFormatTrackService>

@property (retain, nonatomic) NSMutableDictionary *spans;
@property (copy, nonatomic) NSDictionary *eventTransfer;
@property (retain, nonatomic) IESLiveTraceService *liveTraceService;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (retain, nonatomic) NSMutableDictionary *eventExtraParams;
@property (copy, nonatomic) NSString *chatID;
@property (retain, nonatomic) NSMutableDictionary *eventsAfterEnter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)setTrackCommonParams:(id)a0;
- (id)getTrackCommonParams;
- (void)trackEventWithoutCommomParams:(id)a0 extraParams:(id)a1;
- (void)startSpan:(id)a0;
- (void)endSpan:(id)a0 extraParams:(id)a1;
- (void)endSpan:(id)a0 extraParams:(id)a1 calculate:(BOOL)a2;
- (void)addExtraParamsWithKey:(id)a0 params:(id)a1;
- (void)cleanParams;
- (void)trackFormatEvent:(id)a0 params:(id)a1;
- (void)trackEventAfterEnterSuccess:(id)a0 params:(id)a1;
- (void)resetSpan:(id)a0;
- (double)nowTimeInterval;
- (void)removeEventExtarParams:(id)a0;
- (void)calculateSpan:(id)a0;
- (BOOL)isNeedLimitDurationEvent:(id)a0;
- (void)uploadTraceMonitorEvent:(id)a0 params:(id)a1;
- (void)clearAllSpans;
- (void).cxx_destruct;
- (id)init;
- (void)trackEvent:(id)a0;

@end
