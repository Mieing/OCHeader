@class NSMutableDictionary, NSDate;

@interface IESGurdUpdateStatisticModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *stageModelDict;
@property (nonatomic) BOOL updateResult;
@property (nonatomic) BOOL createByReboot;
@property (nonatomic) BOOL retryDownload;
@property (nonatomic) BOOL isUpdating;
@property (nonatomic) int downloadIndex;
@property (nonatomic) int taskRemain;
@property (nonatomic) long long durationTotal;
@property (nonatomic) long long durationLastStage;
@property (nonatomic) long long durationDownload;
@property (nonatomic) long long durationDownloadLastTime;
@property (nonatomic) long long durationActive;
@property (nonatomic) long long durationUnzip;
@property (nonatomic) long long durationDecompressZstd;
@property (nonatomic) long long durationBytepatch;
@property (nonatomic) long long durationZipPatch;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *createTime;

- (void)resetDuration;
- (id)getStageModel:(BOOL)a0 isPatch:(BOOL)a1;
- (void)putDataToDict:(id)a0;
- (void).cxx_destruct;

@end
