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

- (void)setItemPictureUrls:(id)a0;
- (id)itemPictureUrls;
- (void)setTmplVersions:(id)a0;
- (id)tmplVersions;
- (void)setNativePageNeedFullScreenForceUrl:(BOOL)a0;
- (BOOL)nativePageNeedFullScreenForceUrl;
- (void)setItemShowType:(int)a0;
- (int)itemShowType;
- (void)setTraceFlag:(unsigned int)a0;
- (unsigned int)traceFlag;
- (void)setItemIdx:(unsigned int)a0;
- (unsigned int)itemIdx;
- (void)setMsgId:(unsigned int)a0;
- (unsigned int)msgId;
- (void)setBizUin:(unsigned int)a0;
- (unsigned int)bizUin;
- (void)setTmplVersion:(unsigned int)a0;
- (unsigned int)tmplVersion;
- (void)setNoNeedUpdate:(BOOL)a0;
- (BOOL)noNeedUpdate;
- (void)setLastModifyTime:(unsigned int)a0;
- (unsigned int)lastModifyTime;
- (void)setForceUrl:(id)a0;
- (id)forceUrl;
- (void)setClientCacheTime:(unsigned int)a0;
- (unsigned int)clientCacheTime;
- (void)setContent:(id)a0;
- (id)content;
- (void)setUrl:(id)a0;
- (id)url;

@end
