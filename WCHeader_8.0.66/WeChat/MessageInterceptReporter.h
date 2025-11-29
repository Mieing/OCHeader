@interface MessageInterceptReporter : NSObject

@property (nonatomic) long long msgId;
@property (nonatomic) BOOL isChatroom;
@property (nonatomic) BOOL isSelfSend;
@property (nonatomic) long long interceptType;
@property (nonatomic) unsigned long long lastAction;

- (id)initWithMsgWrap:(id)a0;
- (void)reset;
- (void)checkReport;
- (void)recordAction:(unsigned long long)a0;
- (void)recordAction:(unsigned long long)a0 copyLen:(unsigned long long)a1;
- (void)logWithAction:(unsigned long long)a0 copyLen:(unsigned long long)a1;

@end
