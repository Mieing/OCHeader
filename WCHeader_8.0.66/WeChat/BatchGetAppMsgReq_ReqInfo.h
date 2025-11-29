@class NSString;

@interface BatchGetAppMsgReq_ReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL isNativePage;
@property (nonatomic) BOOL requirePicUrlList;
@property (nonatomic) unsigned int subType;

+ (void)initialize;

- (void)setSubType:(unsigned int)a0;
- (unsigned int)subType;
- (void)setRequirePicUrlList:(BOOL)a0;
- (BOOL)requirePicUrlList;
- (void)setIsNativePage:(BOOL)a0;
- (BOOL)isNativePage;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setLastModifyTime:(unsigned int)a0;
- (unsigned int)lastModifyTime;
- (void)setUrl:(id)a0;
- (id)url;

@end
