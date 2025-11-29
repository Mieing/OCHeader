@class MoneyOffTagInfo_AnimationUrl, FinderWxAppInfo;

@interface MoneyOffTagInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tagType;
@property (nonatomic) unsigned int joinedUserNum;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) MoneyOffTagInfo_AnimationUrl *animationUrl;
@property (nonatomic) unsigned long long activityId;
@property (retain, nonatomic) FinderWxAppInfo *groupPage;

+ (void)initialize;

@end
