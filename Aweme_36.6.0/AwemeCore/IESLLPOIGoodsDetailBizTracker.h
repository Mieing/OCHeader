@class NSString, NSMutableDictionary, NSDictionary, IESLLGDTrackerProbe, IESLLGoodsDetailPageContext;

@interface IESLLPOIGoodsDetailBizTracker : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableDictionary *adTrackParams;
@property (retain, nonatomic) NSMutableDictionary *bizTrackParams;
@property (retain, nonatomic) NSMutableDictionary *routerParams;
@property (retain, nonatomic) NSDictionary *preMergeLogData;
@property (retain, nonatomic) IESLLGDTrackerProbe *probe;
@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;

- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)enableBizTrackerProbe;
- (void)appendTrackParams:(id)a0;
- (void)appendTrackResourceFromParams;
- (void)trackEvent:(id)a0 extraParams:(id)a1 btmInfo:(id)a2;
- (id)getFullTrackParams;
- (void)trackADEvent:(id)a0 extraParams:(id)a1;
- (id)buildAdditionRouterParamsByAdditionSessionParams:(id)a0;
- (id)lifeHomepageFreshType;
- (void)mergeStringOrNumberValueToDict:(id)a0 byKey:(id)a1 withValue:(id)a2;
- (id)LifeFreshActionType;
- (void)refreshWithPageContext:(id)a0;
- (void)finishBizTrackerProbe;
- (id)preMergeLogDataWithPageContext:(id)a0;
- (id)decodeShareExt:(id)a0;
- (id)mergeServerBizTrackParams:(id)a0;
- (void)removeMergeKey:(id)a0;
- (id)fetchDictValueFromDict:(id)a0 forKey:(id)a1;
- (id)pickNonEmptyObjectFromArg1:(id)a0 arg2:(id)a1 arg3:(id)a2;
- (id)pickNonEmptyStringFromArg1:(id)a0 arg2:(id)a1 arg3:(id)a2;
- (void)mergeAdExtraData:(id)a0 withData:(id)a1 key:(id)a2;
- (void)checkMisTrackKeysWithTrackEvent:(id)a0 trackParams:(id)a1;
- (void)checkProjectDetailShowParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
