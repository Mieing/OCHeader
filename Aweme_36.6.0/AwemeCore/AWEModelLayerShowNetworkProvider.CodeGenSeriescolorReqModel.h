@class NSArray, NSString;

@interface AWEModelLayerShowNetworkProvider.CodeGenSeriescolorReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ seriesIds;
    void /* function */ advertiseParam;
}

@property (nonatomic, copy) NSArray *seriesIds;
@property (nonatomic, copy) NSString *advertiseParam;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
