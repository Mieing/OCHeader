@class NSMutableArray;

@interface AWETeenProfileRedDotManager : NSObject

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (nonatomic) BOOL shouldShow;

+ (id)sharedInstance;

- (void)setTaskShowenOfType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
