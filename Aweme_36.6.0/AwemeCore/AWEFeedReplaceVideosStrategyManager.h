@class NSMutableArray;

@interface AWEFeedReplaceVideosStrategyManager : NSObject

@property (retain, nonatomic) NSMutableArray *instanceList;

+ (id)sharedInstance;

- (void)buildStrategyInstance;
- (void).cxx_destruct;
- (id)init;

@end
