@class NSString;

@interface RTVXRRoomMessageMonitorInfo : JSONModel

@property (copy, nonatomic) NSString *senderUID;
@property (nonatomic) long long sendTimeStamp;
@property (nonatomic) long long needReport;

+ (id)keyMapper;

- (id)initWithSenderUID:(id)a0 sendTimeStamp:(long long)a1 shouldMonitor:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)shouldMonitor;

@end
