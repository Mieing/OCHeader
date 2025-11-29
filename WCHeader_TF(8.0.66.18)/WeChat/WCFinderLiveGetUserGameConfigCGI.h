@class NSString, PagingGetGamePlayTogetherDynamicItem, FinderLiveGetUserGameConfigRequest_GameCategoryInfo;

@interface WCFinderLiveGetUserGameConfigCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *extraAntiInfo;
@property (nonatomic) unsigned int opensdkVersion;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;
@property (nonatomic) int liveScene;
@property (nonatomic) BOOL onlyNeedPlayTogetherInfo;
@property (retain, nonatomic) PagingGetGamePlayTogetherDynamicItem *pagingGetDynamicItem;
@property (retain, nonatomic) FinderLiveGetUserGameConfigRequest_GameCategoryInfo *gameCategoryInfo;

- (id)initWithFinderUsername:(id)a0 appId:(id)a1 liveScene:(int)a2 extraAntiInfo:(id)a3 opensdkVersion:(unsigned int)a4 platformId:(unsigned int)a5 gameUserId:(id)a6 onlyNeedPlayTogetherInfo:(BOOL)a7 pagingGetDynamicItem:(id)a8 gameCategoryInfo:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
