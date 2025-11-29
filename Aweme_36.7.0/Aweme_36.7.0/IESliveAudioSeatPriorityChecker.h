@class NSString, NSMutableArray;

@interface IESliveAudioSeatPriorityChecker : NSObject

@property (retain, nonatomic) NSMutableArray *priorties;
@property (nonatomic) long long currentPriority;
@property (copy, nonatomic) NSString *logName;

- (void)registerPriority:(id)a0;
- (long long)currentShowingPriority;
- (void).cxx_destruct;
- (id)init;
- (void)enable:(long long)a0;
- (void)disable:(long long)a0;

@end
