@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenIMFeaturepanelbadgeReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ kind;
}

@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, copy) NSString *kind;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
