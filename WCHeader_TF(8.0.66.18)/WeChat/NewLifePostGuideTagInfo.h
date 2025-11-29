@class NSString, NSMutableArray;

@interface NewLifePostGuideTagInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long tagId;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned long long expiredTime;
@property (retain, nonatomic) NSString *guideWording;
@property (retain, nonatomic) NSMutableArray *guideUrlList;
@property (retain, nonatomic) NSString *expiredWording;
@property (retain, nonatomic) NSString *expiredExplain;
@property (nonatomic) unsigned int reddotStatus;
@property (retain, nonatomic) NSString *tagReportInfo;
@property (nonatomic) unsigned int tagStatus;

+ (void)initialize;

@end
