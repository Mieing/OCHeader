@class NSString;

@interface AWEIMAutoSearchGiphyThrottle : NSObject

@property (copy, nonatomic) NSString *timerName;
@property (nonatomic) long long interval;
@property (nonatomic) long long lastExcuteTime;

- (void)excuteIfCanWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithInterval:(long long)a0;

@end
