@class NSString;
@protocol EmoticonRecommendDelegate;

@interface EmoticonEmotionPredictor : IUdrBizFeature <IUdrResourceCallback> {
    struct unique_ptr<EmotionPredictor, std::default_delete<EmotionPredictor>> { struct __compressed_pair<EmotionPredictor *, std::default_delete<EmotionPredictor>> { struct EmotionPredictor *__value_; } __ptr_; } predictor;
}

@property (nonatomic) BOOL hasPrepare;
@property (nonatomic) BOOL ready;
@property (weak, nonatomic) id<EmoticonRecommendDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)runPredict:(id)a0;
- (BOOL)preparePredictor;
- (BOOL)isReady;
- (void)prepareModel;
- (id)makeTokenizer:(id)a0;
- (id)modelPath;
- (id)tokenPath;
- (id)idLabelPath;
- (void)readIdLabel;
- (BOOL)hasModel;
- (BOOL)hasTokenizer;
- (id)modelUnZipDir;
- (BOOL)checkNewModelZipRes;
- (BOOL)checkHasNewRes:(id)a0;
- (void)loadResourceCompleted:(id)a0;
- (void)onResourceUpdate;
- (void)updateModel;
- (void)updateTokenizer;
- (void)loadResourceFromUDR;
- (id)loadModelZipRes;
- (BOOL)isModelResource:(id)a0;
- (id)getProjectId;
- (void)onCallBackSuccess:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
- (void)onCallBackFail:(id)a0 name:(id)a1 version:(int)a2 errNo:(int)a3 errCode:(int)a4 scene:(long long)a5;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
