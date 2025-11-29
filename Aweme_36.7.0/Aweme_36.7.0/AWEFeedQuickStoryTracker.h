@class NSString;

@interface AWEFeedQuickStoryTracker : NSObject <AWEFeedQuickStoryTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addStoryParams:(id)a0 aweme:(id)a1;
+ (id)storyParamsDict:(id)a0;
+ (id)fastTypeWithAwemeType:(long long)a0;


@end
