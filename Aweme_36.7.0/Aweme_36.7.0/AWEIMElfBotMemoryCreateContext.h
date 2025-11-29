@class NSString, AWEIMElfBotDataModel, NSDictionary, NSMutableArray;
@protocol IESIMHttpTask;

@interface AWEIMElfBotMemoryCreateContext : NSObject

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) unsigned long long createType;
@property (copy, nonatomic) NSString *convShortId;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *messageRange;
@property (nonatomic) BOOL needGenTopic;
@property (nonatomic) BOOL genTopicFinish;
@property (nonatomic) BOOL needGenArchive;
@property (nonatomic) BOOL genArchiveFinish;
@property (weak, nonatomic) AWEIMElfBotDataModel *dataModel;
@property (copy, nonatomic) NSString *topicTaskId;
@property (copy, nonatomic) NSString *topicTaskData;
@property (copy, nonatomic) NSString *archiveTaskId;
@property (copy, nonatomic) NSString *archiveTaskData;
@property (copy, nonatomic) NSDictionary *genTopicResponse;
@property (copy, nonatomic) NSDictionary *genArchiveResponse;
@property (nonatomic) long long round;
@property (nonatomic) long long errorCount;
@property (copy, nonatomic) NSDictionary *trackCommonParams;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) NSMutableArray *completionList;
@property (weak, nonatomic) id<IESIMHttpTask> httpTask;

- (id)trackParams;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (void)dealloc;
- (void)cancel;

@end
