@interface AWEVideoIntelligentChapterConfig : NSObject

@property (nonatomic) BOOL chapterOpt;
@property (nonatomic) BOOL chapterOptWithServer;
@property (nonatomic) long long sectionSize;
@property (nonatomic) double sectionSleepTime;
@property (nonatomic) double pollingAfterTime;
@property (nonatomic) double pollingResultTime;
@property (nonatomic) double timeOut;
@property (copy, nonatomic) id /* block */ chapterResultBlock;
@property (copy, nonatomic) id /* block */ nonBlockChapterResultBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ progressDescBlock;
@property (copy, nonatomic) id /* block */ chapterResultFailedBlock;
@property (copy, nonatomic) id /* block */ paramsAddedBlock;
@property (nonatomic) long long minVideoTime;
@property (nonatomic) long long maxVideoTime;
@property (nonatomic) long long uploadMaxThreadCount;
@property (nonatomic) double exportFrameScale;
@property (nonatomic) double exportAudioScale;
@property (nonatomic) double uploadFrameScale;
@property (nonatomic) double uploadAudioScale;
@property (nonatomic) double uploadUriScale;
@property (nonatomic) double getResultScale;
@property (nonatomic) double planTime;

+ (id)onlineConfig;
+ (id)defaultConfig;

- (void).cxx_destruct;

@end
