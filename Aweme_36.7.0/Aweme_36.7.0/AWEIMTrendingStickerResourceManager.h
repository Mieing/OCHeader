@class AWEIMEmoticonThemeModel, NSArray, NSString;

@interface AWEIMTrendingStickerResourceManager : HTSService <IESIMTrendingStickerService>

@property (retain, nonatomic) AWEIMEmoticonThemeModel *trendingThemeModel;
@property (copy, nonatomic) NSArray *memoryCacheCommentTrendingStickers;
@property (nonatomic) double imLastRequestTime;
@property (nonatomic) double imRequestInterval;
@property (nonatomic) unsigned long long imRequestCount;
@property (copy, nonatomic) NSArray *imNextTrendingStickers;
@property (readonly, nonatomic) AWEIMEmoticonThemeModel *innerTrendingThemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)replaceNextRemoteListIfNeeded;
- (void)updateRemoteListWithContext:(id)a0;
- (void)updateRemoteListWithContext:(id)a0 completion:(id /* block */)a1;
- (void)updateRemoteListWithContext:(id)a0 notification:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateCommentTrendingThemeModelWithGroupID:(id)a0 completion:(id /* block */)a1;
- (id)requestNewCommentTrendingThemeModel;
- (void)fetchNextRemoteListIfNeededWithContext:(id)a0;
- (void)updateWithRemoteListRequestConfig;
- (void)processStickModel:(id)a0 error:(id)a1 notification:(BOOL)a2;
- (id)changeResponseToEmotionModel:(id)a0 logID:(id)a1;
- (void)p_fetchRemoteListWithContext:(id)a0 notification:(BOOL)a1 completion:(id /* block */)a2;
- (void)processStickModel:(id)a0 error:(id)a1 notification:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_processStickModel:(id)a0 error:(id)a1 notification:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_updateTrendingCacheList:(id)a0;
- (id)p_getTrendingCacheList;
- (unsigned long long)trendingStickersCount;
- (void).cxx_destruct;
- (id)init;

@end
