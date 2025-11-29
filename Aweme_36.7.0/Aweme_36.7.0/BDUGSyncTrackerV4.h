@interface BDUGSyncTrackerV4 : NSObject

+ (void)eventV3:(id)a0 params:(id)a1;
+ (void)trackLaunch;
+ (void)trackSend:(id)a0 withReason:(int)a1 channel:(unsigned long long)a2;
+ (id)commonParam;
+ (void)trackReceive:(id)a0 channel:(unsigned long long)a1;
+ (void)trackDeliver:(id)a0 withReason:(id)a1 isSuccess:(BOOL)a2;

@end
