@class NSString;

@interface LiveStreamConnectResultEventSource : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) long long rtmpCode1;
@property (nonatomic) long long rtmpCode2;
@property (nonatomic) long long rtmpCode3;
@property (copy, nonatomic) NSString *rtmpMsg;
@property (copy, nonatomic) NSString *extra;

+ (id)sourceWithRtmpCode1:(long long)a0 code2:(long long)a1 code3:(long long)a2 msg:(id)a3;

- (void).cxx_destruct;

@end
