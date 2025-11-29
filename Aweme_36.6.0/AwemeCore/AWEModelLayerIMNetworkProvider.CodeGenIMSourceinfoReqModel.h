@class NSNumber;

@interface AWEModelLayerIMNetworkProvider.CodeGenIMSourceinfoReqModel : AWENetworkProviderBaseRequestModel

@property (nonatomic, retain) NSNumber *serverMessageId;
@property (nonatomic, retain) NSNumber *messageCreateTime;
@property (nonatomic, retain) NSNumber *messageSenderUid;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
