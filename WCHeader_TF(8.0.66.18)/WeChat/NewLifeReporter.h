@class NSString, NSMutableDictionary;

@interface NewLifeReporter : NSObject <IDataReportCgiCallback>

@property (retain, nonatomic) NSMutableDictionary *firstExpFeedCache;
@property (retain, nonatomic) NSMutableDictionary *sdkReportParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onInit;
- (void)onClear;
- (void)handleCgiReportParams:(id)a0 andItemId:(id)a1 andEventId:(id)a2 andResultParams:(id)a3;
- (void)handleFlutterParams:(id)a0 andEventId:(id)a1 andResultParams:(id)a2;
- (void)reportNewLifeCgiEvent:(id)a0 target:(id)a1 params:(id)a2 isBatchReport:(BOOL)a3;
- (void)setNewLifeRedDotParams:(id)a0 forEventId:(id)a1;
- (id)checkToReturnCollectMapItem:(id)a0 andEventId:(id)a1;
- (void)setExpFeedIdWhenScrollEnd:(id)a0 andScene:(unsigned int)a1;
- (id)getFirstExpFeedIdByScene:(unsigned int)a0;
- (void)setNewLifeSdkReportParams:(id)a0 forKey:(id)a1;
- (void)removeNewLifeSdkReportParamsforKey:(id)a0;
- (void)resetNewLifeSdkReportParams:(id)a0 forEventId:(id)a1;
- (void)setFlutterReportSDKInfo:(id)a0;
- (void).cxx_destruct;

@end
