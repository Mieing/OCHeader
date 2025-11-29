@class NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenUGPointeventReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ enterFrom;
    void /* function */ enterFromFirst;
    void /* function */ enterFromSecond;
    void /* function */ arriveTime;
    void /* function */ clickTime;
}

@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *enterFromFirst;
@property (nonatomic, copy) NSString *enterFromSecond;
@property (nonatomic, copy) NSString *arriveTime;
@property (nonatomic, copy) NSString *clickTime;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
