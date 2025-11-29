@class AWEIMElfBotMemoryCustomArchive, AWEIMElfBotMemoryArchive, AWEIMElfBotMemoryTopic;

@interface AWEIMElfBotMemoryRawDataModel : NSObject

@property (nonatomic) long long update_timestamp;
@property (retain, nonatomic) AWEIMElfBotMemoryTopic *topic;
@property (retain, nonatomic) AWEIMElfBotMemoryArchive *archive;
@property (retain, nonatomic) AWEIMElfBotMemoryCustomArchive *customArchive;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
