@interface SAMICore_WebSocketKeepAliveParameter : NSObject

@property (nonatomic) BOOL keepAlive;
@property (nonatomic) int timeOutSecond;
@property (nonatomic) int intervalTimeSecond;
@property (nonatomic) int retryCnt;

@end
