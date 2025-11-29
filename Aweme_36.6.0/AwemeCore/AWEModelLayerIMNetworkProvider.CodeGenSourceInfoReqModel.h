@class NSNumber;

@interface AWEModelLayerIMNetworkProvider.CodeGenSourceInfoReqModel : NSObject

@property (nonatomic, retain) NSNumber *messageCreateTime;
@property (nonatomic, retain) NSNumber *messageSenderUid;
@property (nonatomic, retain) NSNumber *serverMessageId;

- (id)toJSONString;
- (id)initWithMessageCreateTime:(id)a0 messageSenderUid:(id)a1 serverMessageId:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
