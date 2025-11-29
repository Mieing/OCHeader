@class NSString;
@protocol EmoticonRecommendDelegate;

@interface EmoticonTokenizer : IUdrBizFeature <IUdrResourceCallback> {
    struct unique_ptr<EmoticonTokenizerCPP, std::default_delete<EmoticonTokenizerCPP>> { struct __compressed_pair<EmoticonTokenizerCPP *, std::default_delete<EmoticonTokenizerCPP>> { struct EmoticonTokenizerCPP *__value_; } __ptr_; } tokenizer;
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
- (BOOL)prepareTokenizer;
- (BOOL)isReady;
- (id)makeTokenizer:(id)a0;
- (void)updateTokenizer;
- (BOOL)hasTokenizerResource;
- (id)resourceName;
- (id)tokenizerPath;
- (void)loadTokenResourceCompleted;
- (void)loadTokenizerResourceFromUDR;
- (id)loadTokenizerJson;
- (id)getProjectId;
- (void)onCallBackSuccess:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
- (void)onCallBackFail:(id)a0 name:(id)a1 version:(int)a2 errNo:(int)a3 errCode:(int)a4 scene:(long long)a5;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
