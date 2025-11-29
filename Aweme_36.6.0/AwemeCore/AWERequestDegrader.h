@interface AWERequestDegrader : NSObject

@property (nonatomic) BOOL requestLivePresentListOnColdLaunch;
@property (nonatomic) BOOL requestPreloadRoomOnColdLaunch;
@property (nonatomic) BOOL requestHotRoomCountOnColdLaunch;
@property (nonatomic) BOOL requestStoryListOnColdLaunch;
@property (nonatomic) BOOL requestFeedOnColdLaunch;

+ (id)sharedInstance;

- (id)init;

@end
