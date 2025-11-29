@class NSString;

@interface FTSMCSItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *key;
@property (nonatomic) float score;
@property (nonatomic) unsigned int baseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_score;
+ (void)PBArrayAdd_baseTime;
+ (void)initialize;
+ (void)setDeclineFactor:(float)a0;

- (id)getPBPropertyTable;
- (void)addScore;
- (void)updateScoreWithTime:(unsigned int)a0;
- (long long)compareByScoreDesc:(id)a0;
- (void).cxx_destruct;

@end
