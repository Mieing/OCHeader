@class NSString;

@interface WCFinderLiveEncashReporter : NSObject <IWCFinderLiveEncashReporterCallback> {
    NSString *m_encashSessionId;
    long long m_lastSceneType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)openEncashPage;
- (void)onEncashAction:(unsigned long long)a0;
- (void)reportEncashAction:(unsigned long long)a0 withSceneType:(long long)a1;
- (void).cxx_destruct;

@end
