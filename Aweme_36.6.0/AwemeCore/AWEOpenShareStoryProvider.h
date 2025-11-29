@class NSString, AWEOpenShareResp;

@interface AWEOpenShareStoryProvider : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) AWEOpenShareResp *shareResp;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareProvider;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)shareStoryWithShareResponse:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)handleSaveAsDraft:(id)a0;
- (void)handleCancelEvent:(id)a0;
- (void)reportMonitorWithTask:(id)a0 withPublishModel:(id)a1 withResp:(id)a2 error:(id)a3;
- (void)logShareSucceed:(BOOL)a0 parameters:(id)a1;
- (id)unmodifiablePublishParamsForShareStory:(id)a0;
- (id)extraInfoForShareStory:(id)a0;
- (id)createCanvas;
- (id)shareMusicForForShareStory:(id)a0 shareImage:(BOOL)a1;
- (id)addIronManAnchorWithShareResp:(id)a0;
- (id)addPoiAnchorWithShareResp:(id)a0;
- (void)AVURLPathWithAssetModels:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkShouldShowPopView;
- (void)handleBizAccountBlockEvent:(id)a0;
- (void)shareStory:(id)a0 WithVideoAssetModel:(id)a1 imagePHAsset:(id)a2 completion:(id /* block */)a3;
- (void)handleMediaInvalidEvent:(id)a0;
- (void)processLunaAudioWithResp:(id)a0 WithCompletion:(id /* block */)a1;
- (void)handleLunaAudioErrorWithResp:(id)a0 WithCompletion:(id /* block */)a1;
- (void)handleProcessMediaErrorWithResp:(id)a0 WithCompletion:(id /* block */)a1;
- (void)handleImageStoryModelCanvas:(id)a0 withShareResp:(id)a1;
- (id)buildStoryContentModelWithShareResp:(id)a0;
- (void)startShareImageWithStoryModel:(id)a0 withShareResp:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleVideoStoryModelCanvas:(id)a0 withShareResp:(id)a1;
- (void)handlePublishFailureWithTask:(id)a0 error:(id)a1 WithResp:(id)a2 WithCompletion:(id /* block */)a3;
- (void)handleCancelEventWithResp:(id)a0 WithCompletion:(id /* block */)a1;
- (void)handleEnd;
- (void)tryShowPopView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
