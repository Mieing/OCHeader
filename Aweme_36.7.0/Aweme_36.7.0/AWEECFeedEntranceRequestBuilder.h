@class NSString, NSMutableDictionary, AWEECFeedEntranceRequest;

@interface AWEECFeedEntranceRequestBuilder : NSObject <AWEECFeedEntranceRequestBuilderProtocol>

@property (copy, nonatomic) NSString *jsonString;
@property (retain, nonatomic) NSMutableDictionary *passthroughDict;
@property (retain, nonatomic) NSMutableDictionary *internalFlowExtraData;
@property (retain, nonatomic) NSMutableDictionary *goodsDetailExtraData;
@property (copy, nonatomic) NSString *curSceneID;
@property (copy, nonatomic) NSString *metaParamsString;
@property (retain, nonatomic) NSMutableDictionary *commonInsertEntranceInfo;
@property (retain, nonatomic) AWEECFeedEntranceRequest *entranceRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterMethod;
- (id)searchParams;
- (id)carrierType;
- (id)buildProductEntranceClick;
- (id)buildProductAnchorClick;
- (id)goodsDetailExtraDataWithEntranceInfo:(id)a0;
- (id)buildInternalFlowShowRequestWillOpenHalfPage:(id /* block */)a0 willClosePage:(id /* block */)a1 closeHalfPageProgress:(id /* block */)a2 oneStepOrderCompletion:(id /* block */)a3 complete:(id /* block */)a4;
- (id)buildWJPPanelStyleGoodsDetailRequestWillOpenHalfPage:(id /* block */)a0 willClosePage:(id /* block */)a1 closeHalfPageProgress:(id /* block */)a2 complete:(id /* block */)a3;
- (void)trackAdEventShoppingClick;
- (void)trackAdrwAdClick;
- (void)trackAdEventCartClick;
- (void)trackAdEventShoppingClickWithAdExtraData;
- (void)trackAdEventClick;
- (void)p_setupData;
- (id)sourceMethod;
- (BOOL)fromStoreVideo;
- (id)recommendTypeEventDescription;
- (id)composeEntranceInfoFormDict:(id)a0 scene:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
