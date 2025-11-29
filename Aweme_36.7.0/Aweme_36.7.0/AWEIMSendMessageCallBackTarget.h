@class NSString;

@interface AWEIMSendMessageCallBackTarget : NSObject

@property (retain, nonatomic) NSString *messageID;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ onBindAction;
@property (nonatomic) BOOL callActionDoNotWaitServerResponse;
@property (nonatomic) BOOL sendMessageType;

- (void).cxx_destruct;

@end
