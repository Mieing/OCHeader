@class NSString;

@interface SAMICore_WebSocketConnectionEvent : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *textMsg;

- (void)dealloc;

@end
