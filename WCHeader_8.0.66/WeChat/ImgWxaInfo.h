@class NSString;

@interface ImgWxaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *enterPath;
@property (retain, nonatomic) NSString *forwardSceneNote;
@property (retain, nonatomic) NSString *showSourceView;
@property (nonatomic) unsigned int versionType;

+ (void)initialize;

@end
