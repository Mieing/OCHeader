@class TTAdSplashModel, NSArray, NSDictionary, BDASplashModelPicker, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDASplashRealTimeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) TTAdSplashModel *isPickingModel;
@property (nonatomic) long long pickIndex;
@property (nonatomic) long long downloadCount;
@property (retain, nonatomic) NSArray *needPickedModels;
@property (nonatomic) long long modelType;
@property (retain, nonatomic) BDASplashModelPicker *picker;
@property (copy) id /* block */ completion;
@property (nonatomic) BOOL isRealTimeSplash;
@property (nonatomic) double realTimeBeginTime;
@property (copy, nonatomic) NSDictionary *bidSplashControlInfo;

+ (BOOL)brandControl;
+ (id)sharedInstance;

- (void)trackRealTimeResultWithAdExtra:(id)a0;
- (void)pickSuitableRealTimeSplashWithModels:(id)a0;
- (id)realTimeRequestParams;
- (void)realTimeRequestFailed;
- (void)pickSuitableModelWithIndex:(long long)a0;
- (void)excuteCompletionBlock;
- (void)realTimeSplashFinished;
- (void)addDownloadCount;
- (void)subtractDownloadCount;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)request;

@end
