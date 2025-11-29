@class FinderContact, NSData, NSString;

@interface FinderVideoTemplateTopicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (retain, nonatomic) NSData *videoTemplate;
@property (retain, nonatomic) NSString *templateCreatorH5Url;
@property (retain, nonatomic) NSString *templateMusicId;
@property (nonatomic) unsigned int originTemplateCount;
@property (nonatomic) unsigned int templateFlag;

+ (void)initialize;

@end
