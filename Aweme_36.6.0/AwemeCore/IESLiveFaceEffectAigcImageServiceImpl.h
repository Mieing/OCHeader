@class NSMutableDictionary, NSString, IESLiveGCDTimer, NSMutableSet, NSMutableArray, IESLiveFaceStickerApi;

@interface IESLiveFaceEffectAigcImageServiceImpl : NSObject <IESLiveFaceEffectAigcImageService>

@property (retain, nonatomic) IESLiveFaceStickerApi *stickerApi;
@property (nonatomic) BOOL isFetchingHistoryData;
@property (retain, nonatomic) NSMutableDictionary *effectTaskDict;
@property (retain, nonatomic) NSMutableArray *historyDownloadCallbackList;
@property (retain, nonatomic) IESLiveGCDTimer *taskCheckTimer;
@property (retain, nonatomic) NSMutableSet *taskIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanHistoryData;
- (id)aigcBgTaskModelForEffect:(id)a0;
- (void)fetchAigcBackgroundHistoryData:(id /* block */)a0 diContext:(id)a1;
- (void)generateEffectAigcBackground:(id)a0 keyWord:(id)a1 completion:(id /* block */)a2 diContext:(id)a3;
- (BOOL)isHistoryDataReady;
- (void)stopTaskCheckTimer;
- (void)processEffectTaskData:(id)a0 diContext:(id)a1;
- (void)startTaskCheckTimerDIContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
