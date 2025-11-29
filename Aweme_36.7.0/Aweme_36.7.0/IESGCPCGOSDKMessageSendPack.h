@class NSString, NSLock, IESGCPTimer;

@interface IESGCPCGOSDKMessageSendPack : NSObject

@property (copy, nonatomic) NSString *seq;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) IESGCPTimer *timer;
@property (nonatomic) int timeoutCount;
@property (nonatomic) int failCount;
@property (retain, nonatomic) NSLock *lock;

- (BOOL)isExceedRetryThreshold;
- (void)increaseFailCount;
- (void)increaseTimeoutCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
