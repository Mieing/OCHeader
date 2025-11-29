@class NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenStatisticsinfoReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ timegranularity;
    void /* function */ theme;
    void /* function */ aggregatestrategy;
}

@property (nonatomic, copy) NSString *timegranularity;
@property (nonatomic, copy) NSString *theme;
@property (nonatomic, copy) NSString *aggregatestrategy;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
