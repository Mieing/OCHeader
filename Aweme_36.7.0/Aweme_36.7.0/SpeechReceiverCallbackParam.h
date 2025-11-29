@class NSString, NSData;

@interface SpeechReceiverCallbackParam : NSObject

@property (retain, nonatomic) NSString *event;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *meta;
@property (retain, nonatomic) NSData *data;

- (void)dealloc;

@end
