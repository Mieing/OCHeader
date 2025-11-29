@class NSString, BDPShareTask_HG, BDPShareResultModel, BDPUniqueID;

@interface BDPShareBusinessInstance_HG : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *hostID;
@property (retain, nonatomic) BDPShareTask_HG *shareTask;
@property (retain, nonatomic) BDPShareResultModel *resultModel;
@property (nonatomic) double shareStartTime;
@property BOOL uploadImageDone;
@property (copy, nonatomic) id /* block */ previewResultModelCallback;
@property (copy, nonatomic) id /* block */ resultModelCallback;

- (id)generateSchema:(id)a0;
- (void)eventPublishWithName:(id)a0 extra:(id)a1;
- (void)eventShareTrackerWithName:(id)a0 extraParam:(id)a1;
- (id)stringResultWithResultType:(long long)a0;
- (void)previewShareResultModelReadyWithData:(id)a0 error:(id)a1;
- (void)shareResultModelReadyWithData:(id)a0 error:(id)a1;
- (id)generateShareGid;
- (id)initWithUniqueID:(id)a0 deviceID:(id)a1 hostID:(id)a2;
- (void)onShareBeginWithPrepareModel:(id)a0;
- (void)onShareDoneWithResult:(long long)a0 errMsg:(id)a1;
- (void)getPreviewShareResultModelWithCallback:(id /* block */)a0;
- (void)getShareResultModelWithShareChannel:(id)a0 callback:(id /* block */)a1;
- (id)getShareChannelBlockList;
- (void)shareImageUploadDoneWithError:(id)a0 hasImage:(BOOL)a1;
- (void)onShareDoneWithResultAndExtra:(long long)a0 extra:(id)a1 errMsg:(id)a2;
- (void)getShareResultModelWithShareChannel:(id)a0 forceCallback:(BOOL)a1 callback:(id /* block */)a2;
- (void)shareResultModelReadyWithData:(id)a0 error:(id)a1 forceCallback:(BOOL)a2;
- (id)getVideoSource:(id)a0;
- (id)extraDictionaryByFillTransparentDataIfNeeded:(id)a0 pagePath:(id)a1;
- (void).cxx_destruct;

@end
