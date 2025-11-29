@class NSNumber, NSString, NSDictionary;

@interface IESIMModelLayerNetworkProvider.CodeGenIMFeaturepanelfeaturesettingsReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ schema;
    void /* function */ extra;
}

@property (nonatomic, retain) NSNumber *invokeType;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSDictionary *extra;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
