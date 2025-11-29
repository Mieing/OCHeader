@class NSString;

@interface AWEIMSendMessageCallBackResult : NSObject

@property (retain, nonatomic) NSString *serverMessageID;
@property (retain, nonatomic) NSString *clientMessageID;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) long long messageType;

- (void).cxx_destruct;

@end
