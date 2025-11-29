@class NSString, NSMutableArray;

@interface AppMsgContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int clientCacheTime;
@property (retain, nonatomic) NSString *forceUrl;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) BOOL noNeedUpdate;
@property (nonatomic) unsigned int tmplVersion;
@property (nonatomic) unsigned int bizUin;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int itemIdx;
@property (nonatomic) unsigned int traceFlag;
@property (nonatomic) int itemShowType;
@property (nonatomic) BOOL nativePageNeedFullScreenForceUrl;
@property (retain, nonatomic) NSMutableArray *tmplVersions;
@property (retain, nonatomic) NSMutableArray *itemPictureUrls;

+ (void)initialize;

@end
