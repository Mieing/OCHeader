@class DitoPageContext, NSString, NSMutableDictionary, NSPointerArray, AWEPOIDynamicTrackConfigModel, NSDictionary;

@interface AWEPOIDynamicTrackUtil : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableDictionary *mutableDynamicParamsPool;
@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (retain, nonatomic) AWEPOIDynamicTrackConfigModel *configModel;
@property (weak, nonatomic) DitoPageContext *context;
@property (readonly, nonatomic) NSDictionary *dynamicParamsPool;

- (void)didReceiveDitoPageModel:(id)a0 shouldAutomaticallyUpdateSession:(BOOL)a1;
- (void)trackPOIDetailEventWithEventName:(id)a0 enterFrom:(id)a1 params:(id)a2 btmInfo:(id)a3;
- (void)trackPOIEventWithEventName:(id)a0 params:(id)a1 btmInfo:(id)a2;
- (id)calculateConflictKeysArrayInDictionary:(id)a0 withOtherDictionary:(id)a1;
- (void)updateDynamicPoolWithNewParams:(id)a0 shouldAutomaticallyUpdateSession:(BOOL)a1;
- (void)willUpdateSessionInfo:(id)a0 preSessionInfo:(id)a1;
- (void)didEndUpdateSessionInfo:(id)a0;
- (id)mergeDynamicParamsWithParams:(id)a0 determineBlock:(id /* block */)a1;
- (void)didUpdateDynamicPool:(BOOL)a0;
- (void)logWithModuleName:(id)a0 description:(id)a1;
- (id)tryFetchDynamicTrackParamsInPageModel:(id)a0;
- (void)updateSessionInfo;
- (id)calculateNativeTrackParams:(id)a0 eventName:(id)a1;
- (void)doTrackPOIEvent:(id)a0 finalParams:(id)a1 btmInfo:(id)a2;
- (void)doTrackPOIDetailEvent:(id)a0 enterFrom:(id)a1 finalParams:(id)a2 btmInfo:(id)a3;
- (void)trackPOIEventWithEventName:(id)a0 params:(id)a1;
- (void)trackPOIDetailEventWithEventName:(id)a0 enterFrom:(id)a1 params:(id)a2;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionID:(id)a0;

@end
