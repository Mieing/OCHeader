@class NSString;

@interface AWEAIGCBusinessLoraSyncHandler : NSObject <AWEAIGCBusinessInjectHandler>

@property (weak, nonatomic) id /* block */ receiveRateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)constructionServerRequestDictionaryWithModel:(id)a0 tosImages:(id)a1;
- (void)parseAIProcessServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (void)setLoraSyncHandleReceiveRateBlock:(id /* block */)a0;
- (id)constructionServerRequestJsonStringWithModel:(id)a0 tosImages:(id)a1;
- (void)parseServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (id)transFrontierResultCoverList2SubType:(id)a0;
- (long long)getAitype:(id)a0;
- (void)p_handleTaskReview:(id)a0 resultModel:(id)a1 completion:(id /* block */)a2;
- (BOOL)getNeedGenerateSticker:(id)a0;
- (BOOL)getIsAsync:(id)a0;
- (void)downloadRenderPicturesAndTaskReviewWithGeneratedImages:(id)a0 waterMarkImages:(id)a1 coverImages:(id)a2 videos:(id)a3 livePhoto:(id)a4 postProcessIdList:(id)a5 isTaskReview:(BOOL)a6 isvideo:(BOOL)a7 islivephoto:(BOOL)a8 requestModel:(id)a9 resultModel:(id)a10 complete:(id /* block */)a11;
- (void).cxx_destruct;

@end
