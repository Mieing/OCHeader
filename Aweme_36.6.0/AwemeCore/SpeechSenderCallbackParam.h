@class NSString, NSData;

@interface SpeechSenderCallbackParam : NSObject

@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *meta;

- (void)dealloc;

@end
