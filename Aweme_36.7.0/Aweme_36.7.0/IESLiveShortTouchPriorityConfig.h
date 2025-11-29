@interface IESLiveShortTouchPriorityConfig : NSObject

@property (nonatomic) unsigned long long shortType;
@property (nonatomic) long long delayDuration;
@property (copy, nonatomic) id /* block */ notify;
@property (nonatomic) BOOL invalid;

- (void)fireTimer;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)stop;

@end
