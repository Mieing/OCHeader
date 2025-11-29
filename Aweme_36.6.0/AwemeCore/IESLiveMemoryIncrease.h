@class NSTimer, NSString;

@interface IESLiveMemoryIncrease : NSObject <IESLiveStabilityThrashing>

@property (retain, nonatomic) NSTimer *increaseWatchtimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thrashing;

- (void)samplingMemoryIncrease;
- (void).cxx_destruct;
- (void)dealloc;

@end
