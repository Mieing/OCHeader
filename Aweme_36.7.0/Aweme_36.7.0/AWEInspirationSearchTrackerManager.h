@class NSString;

@interface AWEInspirationSearchTrackerManager : NSObject

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *enterMethod;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)reset;

@end
