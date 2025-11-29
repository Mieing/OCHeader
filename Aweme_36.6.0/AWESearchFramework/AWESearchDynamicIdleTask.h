@class NSString;
@protocol AWESearchDynamicIdleTaskDelegate;

@interface AWESearchDynamicIdleTask : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *identify;
@property (weak, nonatomic) id<AWESearchDynamicIdleTaskDelegate> delegate;

+ (id)taskWithSessionID:(id)a0 uniqueKey:(id)a1 priority:(long long)a2;
+ (id)formatIdentifyFromSessionID:(id)a0 uniqueKey:(id)a1;

- (void).cxx_destruct;
- (void)run;
- (void)cancelWithReason:(unsigned long long)a0;

@end
