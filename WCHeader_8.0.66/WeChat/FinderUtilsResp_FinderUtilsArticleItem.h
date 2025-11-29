@class NSString, FinderJumpInfo;

@interface FinderUtilsResp_FinderUtilsArticleItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *authorName;
@property (retain, nonatomic) NSString *thumbImgUrl;
@property (nonatomic) unsigned int html5InfoStyle;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
