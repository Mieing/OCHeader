@class NSString, BDPShareResultModel, BDPUniqueID, BDPShareTask;

@interface BDPShareBusinessInstance : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *hostID;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *functionFrom;
@property (retain, nonatomic) BDPShareTask *shareTask;
@property (retain, nonatomic) BDPShareResultModel *resultModel;
@property (nonatomic) double shareStartTime;
@property BOOL uploadImageDone;
@property BOOL screenShotUploading;
@property (copy, nonatomic) NSString *screenShotImageURL;
@property (copy, nonatomic) id /* block */ previewResultModelCallback;
@property (copy, nonatomic) id /* block */ resultModelCallback;
@property (copy, nonatomic) id /* block */ msgContentCallback;

- (id)generateSchema:(id)a0;
- (void)uploadUserInfoWithPrepareModel:(id)a0 type:(id)a1 shareList:(id)a2 uniqueID:(id)a3 callback:(id /* block */)a4;
- (void)uploadScreenShotWithUniqueID:(id)a0;
- (id)screenShotImageForShareToStoryWithUniqueID:(id)a0;
- (BOOL)hasNoFriend;
- (void)shareImageUploadDoneWithError:(id)a0;
- (void)eventPublishWithName:(id)a0 extra:(id)a1;
- (void)eventShareTrackerWithName:(id)a0 extraParam:(id)a1;
- (id)stringResultWithResultType:(long long)a0;
- (void)previewShareResultModelReadyWithData:(id)a0 error:(id)a1;
- (void)shareResultModelReadyWithData:(id)a0 error:(id)a1;
- (void)msgContentReadyWithData:(id)a0 error:(id)a1;
- (void)realRequestShareResult;
- (id)addParamToExtraDictionary:(id)a0 data:(id)a1 prepareModel:(id)a2;
- (id)generateShareGid;
- (id)generateModelWithPrepareModel:(id)a0 data:(id)a1 common:(id)a2;
- (id)takeScreenShot;
- (void)sendShareFailureFromFriendListWithEvent:(id)a0 channel:(id)a1;
- (id)initWithUniqueID:(id)a0 deviceID:(id)a1 hostID:(id)a2;
- (void)onShareBeginWithPrepareModel:(id)a0;
- (void)onShareDoneWithResult:(long long)a0 errMsg:(id)a1;
- (void)onShareDoneWithResult:(long long)a0 resultInfo:(id)a1 errUserInfo:(id)a2;
- (void)getPreviewShareResultModelWithCallback:(id /* block */)a0;
- (void)getShareResultModelWithShareChannel:(id)a0 callback:(id /* block */)a1;
- (void)getMsgContentWithShareChannel:(id)a0 callback:(id /* block */)a1;
- (void)trackShareObserverStage:(id)a0 resultType:(id)a1 isForward:(BOOL)a2;
- (id)getShareChannelBlockList;
- (void).cxx_destruct;

@end
