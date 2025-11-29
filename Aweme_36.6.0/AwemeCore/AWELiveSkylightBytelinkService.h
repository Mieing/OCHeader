@class NSString;

@interface AWELiveSkylightBytelinkService : NSObject <IESLiveIMMessageSubscriber>

@property (nonatomic) BOOL hasSetPublishers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setFollowTopAnchorPublishers:(id)a0;
- (void)deleteFollowTopAnchorPublishers;
- (void)subscribeByteLinkService;
- (void)sendRefreshNotification:(id)a0;
- (id)init;
- (void)messageReceived:(id)a0;

@end
