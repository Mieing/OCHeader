@class NSString, MMLiveMulticastTimer;

@interface MMLiveMulticastTimerToken : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) MMLiveMulticastTimer *timer;

- (void)subscribe:(id)a0;
- (void)unsubscribe:(id)a0;
- (void).cxx_destruct;

@end
