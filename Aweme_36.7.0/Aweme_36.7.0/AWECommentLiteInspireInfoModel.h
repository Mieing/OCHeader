@class NSString;

@interface AWECommentLiteInspireInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long bizCode;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) BOOL hasNext;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
