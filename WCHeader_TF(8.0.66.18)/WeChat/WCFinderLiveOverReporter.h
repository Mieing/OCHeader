@class NSString;

@interface WCFinderLiveOverReporter : NSObject <IWCFinderLiveOverReporterCallback> {
    NSString *m_sessionId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onOverAction:(unsigned long long)a0 withResult:(unsigned long long)a1;
- (void)reportOverAction:(unsigned long long)a0 withResult:(unsigned long long)a1 actionResultDic:(id)a2;
- (void).cxx_destruct;

@end
