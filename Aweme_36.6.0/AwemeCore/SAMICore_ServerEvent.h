@class NSString, NSData;

@interface SAMICore_ServerEvent : NSObject

@property (retain, nonatomic) NSString *event;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSString *textMsg;
@property (retain, nonatomic) NSString *extra;
@property (retain, nonatomic) NSData *binaryData;
@property (nonatomic) int binaryDateLen;

- (void)dealloc;

@end
