@class NSMutableArray, BaseResponse;

@interface FinderLiveGetUserGameConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *gameUserInfoList;
@property (nonatomic) unsigned int showSearchMoreGames;
@property (retain, nonatomic) NSMutableArray *gameCategoryList;
@property (nonatomic) BOOL needClearClientLocalCache;

+ (void)initialize;

@end
