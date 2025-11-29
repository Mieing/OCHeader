@class AWEHotListDataController, NSArray, NSError;

@interface AWEAwemePreloadFeedManager : NSObject

@property (retain, nonatomic) AWEHotListDataController *hotDataController;
@property (copy, nonatomic) NSArray *feedList;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL usePreloadFlag;
@property (nonatomic) double cacheFeedResponseDuration;
@property (nonatomic) double feedResponseDuration;
@property (nonatomic) BOOL finished;

+ (id)sharedInstance;

- (void)initialFetch;
- (BOOL)preloadValid;
- (void).cxx_destruct;

@end
