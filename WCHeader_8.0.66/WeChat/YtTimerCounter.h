@class NSString;

@interface YtTimerCounter : NSObject {
    unsigned long long elaspeTimeMs;
    unsigned long long targetTimeoutMs;
    BOOL needTimer;
    NSString *name;
    BOOL needShowTimer;
}

- (id)initWith:(unsigned long long)a0 withName:(id)a1 withTips:(BOOL)a2;
- (void)start;
- (void)reset;
- (BOOL)checkTimeout;
- (void)cancel;
- (BOOL)isWorking;
- (void).cxx_destruct;

@end
