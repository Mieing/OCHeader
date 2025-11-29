@class AWEIMElfBotMemoryCustomArchiveBrief, AWEIMElfBotMemoryTopicArchiveBrief;

@interface AWEIMElfBotMemorySyncBriefModel : NSObject

@property (retain, nonatomic) AWEIMElfBotMemoryTopicArchiveBrief *topic;
@property (retain, nonatomic) AWEIMElfBotMemoryTopicArchiveBrief *archive;
@property (retain, nonatomic) AWEIMElfBotMemoryCustomArchiveBrief *customArchive;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
