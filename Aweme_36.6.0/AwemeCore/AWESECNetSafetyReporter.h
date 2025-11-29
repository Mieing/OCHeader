@class NSString;

@interface AWESECNetSafetyReporter : NSObject <SECEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleDetectEvent:(id)a0;
- (void)_handleTTNetLogEvent:(id)a0;
- (void)_logEvent:(id)a0 withError:(id)a1;
- (void)prepareRelatedLog:(id)a0;
- (void)_reportDetectEvent:(id)a0;
- (void)_reportUniDetectEvent:(id)a0;
- (void)_logDetectEvent:(id)a0;
- (void)_reportDetectPerformance:(id)a0;
- (id)interestLogRelated:(id)a0;
- (id)reportParamsForURLRelatedLog:(id)a0;
- (id)reportParamsForProtectAction:(id)a0;
- (id)descForNetPart:(unsigned long long)a0;
- (void)handleEvent:(id)a0;
- (void)_handleEvent:(id)a0;
- (id)subscriberId;

@end
