@class NSString, AWEIMRedPacketNLPResponseModel;

@interface AWEIMRedpacketOpenOutputModel : NSObject

@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) NSString *serverMessageID;
@property (retain, nonatomic) NSString *clientMessageID;
@property (nonatomic) long long currentStage;
@property (retain, nonatomic) AWEIMRedPacketNLPResponseModel *nlpResult;

- (void).cxx_destruct;
- (id)description;

@end
