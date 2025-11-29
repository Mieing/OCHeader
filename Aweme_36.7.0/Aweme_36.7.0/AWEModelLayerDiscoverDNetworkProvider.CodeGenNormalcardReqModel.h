@class NSString, _TtC37AWEModelLayerDiscoverDNetworkProvider25CodeGenRenderinfoReqModel, _TtC37AWEModelLayerDiscoverDNetworkProvider27CodeGenBusinessinfoReqModel, NSNumber;

@interface AWEModelLayerDiscoverDNetworkProvider.CodeGenNormalcardReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ id;
    void /* function */ type;
    void /* function */ logPb;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _TtC37AWEModelLayerDiscoverDNetworkProvider27CodeGenBusinessinfoReqModel *businessInfo;
@property (nonatomic, retain) _TtC37AWEModelLayerDiscoverDNetworkProvider25CodeGenRenderinfoReqModel *renderInfo;
@property (nonatomic, copy) NSString *logPb;
@property (nonatomic, retain) NSNumber *timeStamp;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
