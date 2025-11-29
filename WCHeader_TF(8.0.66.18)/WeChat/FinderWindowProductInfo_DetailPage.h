@class NSString, FinderJumpInfo;

@interface FinderWindowProductInfo_DetailPage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *headimgUrl;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int showNavigationBar;
@property (nonatomic) unsigned int showDragBar;
@property (retain, nonatomic) FinderJumpInfo *finderJumpInfo;

+ (void)initialize;

@end
