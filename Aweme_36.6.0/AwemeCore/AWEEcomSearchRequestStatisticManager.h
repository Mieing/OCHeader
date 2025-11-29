@class NSMutableDictionary;

@interface AWEEcomSearchRequestStatisticManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *costDict;
@property (retain, nonatomic) NSMutableDictionary *startTimeDict;
@property (retain, nonatomic) NSMutableDictionary *endTimeDict;
@property (retain, nonatomic) NSMutableDictionary *photoCostDict;
@property (retain, nonatomic) NSMutableDictionary *photoStartTimeDict;

+ (id)sharedInstance;

- (void)startStatisticTimeForKey:(id)a0;
- (void)endStatisticTimeForKey:(id)a0;
- (void)appendCostForKey:(id)a0 cost:(double)a1 scene:(long long)a2;
- (void)startPhotoStatisticTimeForKey:(id)a0;
- (void)endPhotoStatisticTimeForKey:(id)a0;
- (void)startStatisticTime:(double)a0 forKey:(id)a1;
- (void)endStatisticTime:(double)a0 forKey:(id)a1;
- (id)p_costCountKey:(id)a0;
- (id)costParams;
- (void)resetAppendCost:(long long)a0;
- (void)startPhotoTrack;
- (id)photoCostParams;
- (void).cxx_destruct;
- (id)init;

@end
