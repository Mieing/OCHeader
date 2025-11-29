@class NSString;

@interface AWEIMMangoIncentiveChatBagPollingTask : NSObject

@property (nonatomic) double interval;
@property (nonatomic) long long pollingLimit;
@property (nonatomic) long long completePopAllowSecondDiff;
@property (copy, nonatomic) NSString *taskGroup;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long count;
@property (nonatomic) unsigned long long status;

- (void)pollWithInterval:(double)a0;
- (void)requestWithCompletion:(id /* block */)a0;
- (id)initWithTaskID:(id)a0 taskToken:(id)a1 taskGroup:(id)a2 scene:(id)a3;
- (void).cxx_destruct;
- (void)execute;
- (void)cancel;

@end
