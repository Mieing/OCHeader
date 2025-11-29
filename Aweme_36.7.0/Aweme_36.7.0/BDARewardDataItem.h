@class BDARewardReqTimestampModel, NSArray, NSString, NSDictionary, BDARewardTaskPickContext;

@interface BDARewardDataItem : NSObject

@property (retain, nonatomic) NSArray *models;
@property (nonatomic) long long shootRewardOneStage;
@property (copy, nonatomic) NSString *postDoneExtra;
@property (copy, nonatomic) NSString *oneStageRewardInfo;
@property (nonatomic) long long oneStageAmount;
@property (copy, nonatomic) NSString *preloadToken;
@property (retain, nonatomic) NSDictionary *jsonObject;
@property (retain, nonatomic) NSString *flatEcomInfo;
@property (nonatomic) long long effectiveInspireTime;
@property (copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) BOOL hasOneStageAmount;
@property (nonatomic) BOOL hasAdSend;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) BDARewardReqTimestampModel *requestTimingModel;
@property (readonly, nonatomic) unsigned long long mixType;
@property (retain, nonatomic) BDARewardTaskPickContext *pickedTask;

- (id)initWithADModels:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
