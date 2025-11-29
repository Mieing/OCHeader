@class NSMutableDictionary;

@interface IESECLiveApiDurationManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *startTimeDict;
@property (retain, nonatomic) NSMutableDictionary *durationDict;

+ (double)currentTime;

- (void)requestStart:(id)a0 caller:(id)a1;
- (void)requestEnd:(id)a0 caller:(id)a1;
- (id)getDuration:(id)a0 caller:(id)a1;
- (void).cxx_destruct;

@end
