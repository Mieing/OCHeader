@class NSString, BDARewardTaskPickContext;

@interface BDARewardOneStageInfo : NSObject

@property (nonatomic) long long oneStageAmount;
@property (retain, nonatomic) NSString *postDoneExtra;
@property (retain, nonatomic) BDARewardTaskPickContext *pickedTask;

- (id)initWithAmount:(long long)a0 postDoneExtra:(id)a1 pickedTask:(id)a2;
- (void).cxx_destruct;

@end
