@class NSNumber, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenIMFeaturepanelfeaturedynamicReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ key;
}

@property (nonatomic, retain) NSNumber *policy;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSNumber *isContentReplace;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
