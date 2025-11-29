@class NSMutableArray;

@interface AWETeenFeedReadyTaskManager : NSObject

@property (nonatomic) BOOL isFeedReady;
@property (retain, nonatomic) NSMutableArray *taskArray;

+ (id)sharedInstanced;

- (void)executeTask;
- (void).cxx_destruct;
- (id)init;
- (void)registerTask:(id /* block */)a0;

@end
