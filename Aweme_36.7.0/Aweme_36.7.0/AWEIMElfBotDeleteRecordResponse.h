@class NSDictionary, NSArray;

@interface AWEIMElfBotDeleteRecordResponse : NSObject

@property (nonatomic) long long deleteVersion;
@property (nonatomic) long long deleteAllMemoryTime;
@property (nonatomic) long long deleteAllTopicTime;
@property (copy, nonatomic) NSDictionary *deleteCustomArchiveTime;
@property (copy, nonatomic) NSArray *topicRecords;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
