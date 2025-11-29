@class NSString;

@interface AWEStudio24StoryABService : NSObject <AWEStudio24StoryABServiceProtocol>

@property (readonly, nonatomic) BOOL is24StoryRemould;
@property (readonly, nonatomic) BOOL shouldDisableStoryEntrance;
@property (readonly, nonatomic) BOOL enablePublishMateVersionStory;
@property (readonly, nonatomic) BOOL shouldMateOnboadingPublish24StoryFailedRetryUseMatePrivacyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)enableFriendRebrand;

@end
