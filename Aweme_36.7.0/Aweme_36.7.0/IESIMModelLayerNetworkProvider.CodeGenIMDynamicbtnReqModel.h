@class NSArray, NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenIMDynamicbtnReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ dataType;
    void /* function */ extra;
}

@property (nonatomic, copy) NSArray *dataType;
@property (nonatomic, copy) NSDictionary *extra;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
