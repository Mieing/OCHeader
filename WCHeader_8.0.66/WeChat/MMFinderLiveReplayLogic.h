@class NSString, MMFinderLiveReplayTaskId, NSData, MMFinderLiveReplayTask;
@protocol MMFinderLiveReplayLogicDelegate;

@interface MMFinderLiveReplayLogic : NSObject <WCFinderLiveExt>

@property (retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId;
@property (readonly, nonatomic) MMFinderLiveReplayTask *replayLiveTask;
@property (retain, nonatomic) NSData *lastPreviewThumbReqBuffer;
@property (nonatomic) BOOL isFetchingPreviewThumb;
@property (nonatomic) BOOL hasFetchedPreviewThumb;
@property (nonatomic) unsigned int continueFailCnt;
@property (weak, nonatomic) id<MMFinderLiveReplayLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)clearLive;
- (BOOL)getLiveInfoWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)saveLastLiveInfo;
- (void)enableCurrentLiveReplay:(BOOL)a0 isDelete:(BOOL)a1 scene:(long long)a2 completeBlock:(id /* block */)a3;
- (void)enableCurrentLiveReplay:(BOOL)a0 scene:(long long)a1 completeBlock:(id /* block */)a2;
- (void)enableCurrentLiveReplay:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)fetchDetailNewDataItem;
- (void)getReplayPreviewThumbList;
- (void)inner_getReplayPreviewThumbList;
- (void)clearFetchingPreviewThumbParams;
- (void).cxx_destruct;

@end
