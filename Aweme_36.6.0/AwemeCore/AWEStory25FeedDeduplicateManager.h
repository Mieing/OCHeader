@class NSString;

@interface AWEStory25FeedDeduplicateManager : NSObject <AWEStory25FeedDeduplicateManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldFilterStory25WithOldModel:(id)a0 andNewModel:(id)a1;
+ (BOOL)hasUnread25Story:(id)a0;
+ (void)postPlayStory25NotificationWithAweme:(id)a0 enterFrom:(id)a1;


@end
