@class NSString, NSArray, AWEPublishFlowModel, NSError;

@interface AWEPublishExceptionTaskContext : AWEPublishExceptionBaseContext

@property (nonatomic) BOOL isPublishButtonClick;
@property (nonatomic) long long currentTaskCountOfPublishButtonClick;
@property (retain, nonatomic) NSString *taskQueueDescOfPublishButtonClick;
@property (nonatomic) double progressOfPublishButtonClick;
@property (nonatomic) double timeOfPublishButtonClick;
@property (nonatomic) long long flowTypeOfPublishButtonClick;
@property (nonatomic) double taskDuration;
@property (nonatomic) double progressOfPublishFail;
@property (nonatomic) long long flowTypeOfPublishFail;
@property (retain, nonatomic) NSError *stageError;
@property (retain, nonatomic) NSString *stageType;
@property (nonatomic) long long stageStatus;
@property (nonatomic) double stageProgess;
@property (weak, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) NSArray *lastProgressTimeArray;
@property (retain, nonatomic) NSArray *firstProgress80Time;
@property (retain, nonatomic) NSArray *firstProgress98Time;

- (void).cxx_destruct;

@end
