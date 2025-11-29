@class NSString;

@interface MJShootAIGCCgiManager : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned int postEnterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultNetworkingMetaData;
+ (id)userMediaFileAssetWithAIGCSubmitRequest:(id)a0;
+ (id)buildQueryResponseWithTaskInfo:(id)a0 queryInterval:(unsigned int)a1 queryMaxTimes:(unsigned int)a2 isFinished:(BOOL)a3 contextBuff:(id)a4 assetList:(id)a5;
+ (BOOL)canMapAIGCResultCodeWithErrorCode:(int)a0;
+ (unsigned long long)mapAIGCResultCodeWithErrorCode:(int)a0;
+ (unsigned long long)mapMJAIMediaType:(int)a0;
+ (unsigned long long)mapMJContentSpliceType:(int)a0;

- (void)submitAIGCRequest:(id)a0;
- (void)queryAIGCWithTaskInfo:(id)a0 completion:(id /* block */)a1;
- (void)queryAIGCWithTaskInfo:(id)a0;
- (void)cancelAIGCWithTaskInfo:(id)a0;
- (void)modAIGCTaskRequesWithTaskID:(id)a0 mjDraftID:(id)a1 coverImgURL:(id)a2 successfulBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;

@end
