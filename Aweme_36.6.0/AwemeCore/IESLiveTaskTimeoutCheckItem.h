@class IESLiveCommonTask;

@interface IESLiveTaskTimeoutCheckItem : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) double timeout;
@property (readonly, weak, nonatomic) IESLiveCommonTask *task;

- (void)checkInvoke;
- (void)startOverTimeCheckWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithTimeout:(id)a0;
- (void)cancel;

@end
