@class HTSLiveReachability;

@interface HTSLiveNetworkStatusNotifier : NSObject

@property (retain, nonatomic) HTSLiveReachability *reachability;
@property (nonatomic) BOOL started;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;

@end
