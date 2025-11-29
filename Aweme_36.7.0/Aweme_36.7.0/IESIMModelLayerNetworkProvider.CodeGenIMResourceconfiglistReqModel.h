@class NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenIMResourceconfiglistReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ resourceConfigs;
}

@property (nonatomic, copy) NSDictionary *resourceConfigs;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
