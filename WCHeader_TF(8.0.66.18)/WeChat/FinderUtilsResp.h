@class BaseResponse, FinderMusicInfo, NSData, FinderUtilsResp_FinderUtilsArticleItem, FinderUtilsResp_FinderUtilsMiniAppItem;

@interface FinderUtilsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderUtilsResp_FinderUtilsArticleItem *article;
@property (retain, nonatomic) FinderUtilsResp_FinderUtilsMiniAppItem *miniapp;
@property (retain, nonatomic) FinderMusicInfo *musicInfo;
@property (retain, nonatomic) NSData *finderSecretData;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
