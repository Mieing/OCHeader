@class NSString;

@interface NetworkControl : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *portList;
@property (retain, nonatomic) NSString *timeoutList;
@property (nonatomic) unsigned int minNoopInterval;
@property (nonatomic) unsigned int maxNoopInterval;
@property (nonatomic) int typingInterval;
@property (nonatomic) int noopIntervalTime;

+ (void)initialize;

- (void)setNoopIntervalTime:(int)a0;
- (int)noopIntervalTime;
- (void)setTypingInterval:(int)a0;
- (int)typingInterval;
- (void)setMaxNoopInterval:(unsigned int)a0;
- (unsigned int)maxNoopInterval;
- (void)setMinNoopInterval:(unsigned int)a0;
- (unsigned int)minNoopInterval;
- (void)setTimeoutList:(id)a0;
- (id)timeoutList;
- (void)setPortList:(id)a0;
- (id)portList;

@end
