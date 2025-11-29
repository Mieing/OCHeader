@class NSString, NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenIMTexttemplateparamsReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ key;
    void /* function */ source;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSDictionary *extra;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
