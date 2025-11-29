@class NSString;

@interface CSJAdDyLiteRenderConfigInfoModel : CSJBasicModel

@property (nonatomic) long long pre_request_ad_num;
@property (nonatomic) long long reward_task_goal;
@property (nonatomic) long long reward_task_type;
@property (copy, nonatomic) NSString *reward_text;
@property (nonatomic) long long reward_time;

- (void).cxx_destruct;

@end
