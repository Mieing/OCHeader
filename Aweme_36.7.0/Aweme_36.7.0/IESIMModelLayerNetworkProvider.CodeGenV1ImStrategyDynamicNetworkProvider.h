@class NSString, _TtC30IESIMModelLayerNetworkProvider48CodeGenIMStrategyDynamicActionbarRequestReqModel, NSNumber, _TtC30IESIMModelLayerNetworkProvider51CodeGenIMStrategyDynamicFeaturePanelRequestReqModel;

@interface IESIMModelLayerNetworkProvider.CodeGenV1ImStrategyDynamicNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ conversationId;
}

@property (nonatomic, retain) NSNumber *conversationShortId;
@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider48CodeGenIMStrategyDynamicActionbarRequestReqModel *actionbarRequest;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider51CodeGenIMStrategyDynamicFeaturePanelRequestReqModel *featurePanelRequest;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
