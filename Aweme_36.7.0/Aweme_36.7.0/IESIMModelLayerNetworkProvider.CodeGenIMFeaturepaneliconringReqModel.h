@class NSString, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenIMFeaturepaneliconringReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ color;
    void /* function */ backgroundColor;
}

@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, retain) NSNumber *progress;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
