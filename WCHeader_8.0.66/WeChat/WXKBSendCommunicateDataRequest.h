@class NSData, NSString;

@interface WXKBSendCommunicateDataRequest : WXKBBaseRequest

@property (nonatomic) long long type;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *action;

- (void).cxx_destruct;

@end
