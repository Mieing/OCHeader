@class NSString;

@interface WCFinderLiveNearbyReporter : NSObject <IWCFinderLiveNearbyReporterCallback> {
    NSString *m_sessionId;
    NSString *m_clickId;
    unsigned long long m_pageType;
    BOOL m_isInHalfPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onNearbyStartLiveClick:(unsigned long long)a0;
- (void)onNearbyStartLiveAction:(unsigned long long)a0;
- (void)reportNearbyStartLiveClick:(unsigned long long)a0;
- (void)reportNearbyStartLiveAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
