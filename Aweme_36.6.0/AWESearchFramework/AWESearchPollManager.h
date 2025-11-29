@class NSString, NSDictionary;
@protocol AWEHttpTask;

@interface AWESearchPollManager : NSObject

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ pollCallBack;

- (void)tryRollRequest;
- (void)pollRequest;
- (void)resultRequest:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)start;
- (void)poll;

@end
