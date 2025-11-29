@class NSString;
@protocol AWETimorEventListenerDelegate;

@interface AWETimorEventListenerAdapter : NSObject <BDPTimorEventListenerDelegate>

@property (retain, nonatomic) id<AWETimorEventListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)receiveEvent:(id)a0 data:(id)a1;

@end
