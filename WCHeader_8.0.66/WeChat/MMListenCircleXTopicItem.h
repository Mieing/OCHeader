@class NSString, MMListenCircleXUserInfo;

@interface MMListenCircleXTopicItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenCircleXUserInfo *titleAuthor;
@property (nonatomic) unsigned int postNum;
@property (nonatomic) BOOL notToRecommend;

+ (void)initialize;

@end
