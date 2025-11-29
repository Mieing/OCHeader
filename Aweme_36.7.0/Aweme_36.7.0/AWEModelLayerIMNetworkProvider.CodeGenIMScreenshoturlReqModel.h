@class NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenIMScreenshoturlReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ key;
    void /* function */ uri;
    void /* function */ uriSkey;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *uriSkey;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
