@class NSString, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenIMLeadsBizcommonparamReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ jsSdkVersion;
}

@property (nonatomic, copy) NSString *jsSdkVersion;
@property (nonatomic, retain) NSNumber *loginUserId;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
