@class NSObject, AVAudioSession, AVAudioSessionRouteDescription;
@protocol OS_dispatch_queue;

@interface BDByteCastAudioSession : NSObject

@property (retain, nonatomic) AVAudioSession *session;
@property (retain, nonatomic) AVAudioSessionRouteDescription *currentRoute;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL containsAirPlayOutput;
@property (readonly, nonatomic) BOOL containsHDMIOutput;
@property (readonly, nonatomic) BOOL containsDisplayPortOutput;
@property (readonly, nonatomic) BOOL containsThunderboltOutput;

+ (id)keyPathsForValuesAffectingContainsAirPlayOutput;
+ (id)keyPathsForValuesAffectingContainsHDMIOutput;
+ (id)keyPathsForValuesAffectingContainsThunderboltOutput;
+ (id)keyPathsForValuesAffectingContainsDisplayPortOutput;
+ (id)sharedInstance;

- (BOOL)containsOutput:(id)a0;
- (void)async:(id /* block */)a0 main:(id /* block */)a1;
- (BOOL)wait:(id /* block */)a0 timeout:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)routeDidChange:(id)a0;
- (id)initWithAudioSession:(id /* block */)a0;
- (void)observe;

@end
