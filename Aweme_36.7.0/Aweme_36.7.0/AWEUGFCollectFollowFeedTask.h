@class NSString;

@interface AWEUGFCollectFollowFeedTask : AWEUGFCollectFollowBaseTask <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;

- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)receiveEvent:(id)a0 params:(id)a1;
- (void)dealFppTriggerResponse:(id)a0 followed:(BOOL)a1;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
