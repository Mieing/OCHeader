@class NSString;

@interface EcsArticleInfo : WXPBGeneratedMessage

@property (readonly, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSString *msgId;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned int openScene;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) BOOL hideShareMenu;

+ (void)initialize;

@end
