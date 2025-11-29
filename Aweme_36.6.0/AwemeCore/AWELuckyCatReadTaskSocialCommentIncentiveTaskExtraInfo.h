@class NSString;

@interface AWELuckyCatReadTaskSocialCommentIncentiveTaskExtraInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long commentCountLimit;
@property (nonatomic) long long videoPlayPercent;
@property (nonatomic) long long longVideoPlayPercent;
@property (nonatomic) long long longVideoPlayTime;
@property (nonatomic) long long launchSkipVVCount;
@property (nonatomic) long long gapSkipVVCount;
@property (nonatomic) long long guideDailyLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
