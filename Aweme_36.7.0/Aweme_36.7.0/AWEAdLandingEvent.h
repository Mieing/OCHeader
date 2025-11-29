@interface AWEAdLandingEvent : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long counter;

+ (id)eventWithHandler:(id /* block */)a0;

- (void)occuredOnce;
- (void)occured;
- (void).cxx_destruct;

@end
