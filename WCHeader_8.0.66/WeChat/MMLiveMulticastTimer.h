@class NSString, MMLiveMulticastTimerToken, MMTimer;

@interface MMLiveMulticastTimer : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MMLiveMulticastTimerToken *token;
@property (retain, nonatomic) MMTimer *timer;

- (id)initWithTimeInterval:(double)a0 repeating:(BOOL)a1;
- (void)dealloc;
- (void)invalidate;
- (void)subscribe:(id)a0;
- (void)unsubscribe:(id)a0;
- (void)onTick;
- (void).cxx_destruct;

@end
