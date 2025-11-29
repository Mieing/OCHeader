@class NSString;

@interface AWEStudio25StoryTrackerService : HTSService <AWEStudio25StoryTrackerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams:(id)a0;
- (id)socialPushNoticeBarTrackParams:(id)a0;
- (void)trackTemplateShow:(id)a0 position:(long long)a1;
- (void)trackShareToStoryLaunchWithSchema:(id)a0 type:(id)a1 extraParams:(id)a2;
- (void)trackSparkShareToStoryLaunchWithSchema:(id)a0 composer:(id)a1;

@end
