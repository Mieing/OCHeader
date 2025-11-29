@class NSString;

@interface AWEFollowNoticeImmediatelyRewardInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *beforeFollowTemplate;
@property (copy, nonatomic) NSString *mutualFollowTemplate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
