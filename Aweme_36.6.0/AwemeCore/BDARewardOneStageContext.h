@class NSString, BDARewardOneStageInfo;

@interface BDARewardOneStageContext : NSObject

@property (retain, nonatomic) NSString *logExtra;
@property (retain, nonatomic) BDARewardOneStageInfo *oneStageInfo;
@property (nonatomic) unsigned long long adPrice;
@property (nonatomic) long long effectiveInspireTime;

- (id)initWithADLogExtra:(id)a0 inspireTime:(long long)a1 oneStageAmount:(long long)a2 postDoneExtra:(id)a3 pickedTask:(id)a4;
- (void).cxx_destruct;

@end
