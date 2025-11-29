@class NSString;
@protocol AWELiveCustomMessageSubscriber;

@interface AWELiveAttachSubscriber : NSObject <HTSLiveMessageSubscriber>

@property (weak, nonatomic) id<AWELiveCustomMessageSubscriber> realSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
