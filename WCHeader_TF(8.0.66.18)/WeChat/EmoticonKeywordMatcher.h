@class NSSet, EmoticonTokenizer, NSString;
@protocol EmoticonRecommendDelegate;

@interface EmoticonKeywordMatcher : IUdrBizFeature <IUdrResourceCallback, EmoticonRecommendDelegate>

@property (nonatomic) BOOL hasPrepare;
@property (nonatomic) BOOL ready;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) EmoticonTokenizer *tokenizer;
@property (weak, nonatomic) id<EmoticonRecommendDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)prepareMatching;
- (BOOL)isReady;
- (id)makeTokenizer:(id)a0;
- (id)matchKeywords:(id)a0;
- (BOOL)isInKeywordList:(id)a0;
- (void)loadKeywordResourceCompleted;
- (void)updateKeywords;
- (id)parseKeyWords:(id)a0;
- (id)resourceName;
- (BOOL)hasKeywordResource;
- (id)keywordPath;
- (id)loadKeywordResource;
- (void)loadKeywordResourceFromUDR;
- (id)getProjectId;
- (id)getWorkerQueue;
- (void)onCallBackSuccess:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
- (void)onCallBackFail:(id)a0 name:(id)a1 version:(int)a2 errNo:(int)a3 errCode:(int)a4 scene:(long long)a5;
- (void).cxx_destruct;

@end
