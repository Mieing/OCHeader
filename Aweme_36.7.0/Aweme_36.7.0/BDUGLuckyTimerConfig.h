@class NSArray, NSDictionary;

@interface BDUGLuckyTimerConfig : BDUGLuckyJSONModel

@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSDictionary *timerRules;
@property (nonatomic) double expireAt;
@property (nonatomic) double targetTs;
@property (nonatomic) double ackedTs;
@property (nonatomic) double reportIntervalTs;
@property (copy, nonatomic) NSArray *millstonesTs;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
