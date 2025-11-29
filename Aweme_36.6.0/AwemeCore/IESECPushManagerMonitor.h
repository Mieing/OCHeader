@interface IESECPushManagerMonitor : NSObject

@property (nonatomic) double connectStartTime;
@property (nonatomic) double sendMessageStartTime;

- (void)pushManagerStartConnection;
- (void)pushManagerStartSendMessage;
- (void)pushManagerFinishSendMessage:(id)a0 success:(BOOL)a1;
- (void)pushManagerConnectionStateChanged:(unsigned long long)a0;

@end
