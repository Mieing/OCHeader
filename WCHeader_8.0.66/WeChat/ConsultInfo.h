@class MediaList;

@interface ConsultInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int contactType;
@property (nonatomic) unsigned int consultType;
@property (nonatomic) unsigned int content;
@property (retain, nonatomic) MediaList *mediaList;
@property (nonatomic) unsigned long long createTime;

+ (void)initialize;

@end
