@class NSTimer;

@interface AFNetworkActivityIndicatorManager : NSObject

@property (nonatomic) long long activityCount;
@property (retain, nonatomic) NSTimer *activityIndicatorVisibilityTimer;
@property (readonly, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL isNetworkActivityIndicatorVisible;

+ (id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
+ (id)sharedManager;

- (void)networkRequestDidStart:(id)a0;
- (void)networkRequestDidFinish:(id)a0;
- (void)updateNetworkActivityIndicatorVisibility;
- (void)updateNetworkActivityIndicatorVisibilityDelayed;
- (void)incrementActivityCount;
- (void)decrementActivityCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
