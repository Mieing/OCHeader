@class NSString;

@interface MMFinderLiveKTVResLoadTask : NSObject

@property (retain, nonatomic) NSString *taskKey;
@property (copy, nonatomic) id /* block */ timeoutCallback;

- (id)initWithTaskKey:(id)a0;
- (void)start;
- (void)stop;
- (void)timeoutToLoad;
- (void).cxx_destruct;

@end
