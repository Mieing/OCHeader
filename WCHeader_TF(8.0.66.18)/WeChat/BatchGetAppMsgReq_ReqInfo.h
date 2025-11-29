@class NSString;

@interface BatchGetAppMsgReq_ReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int lastModifyTime;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL isNativePage;
@property (nonatomic) BOOL requirePicUrlList;
@property (nonatomic) unsigned int subType;

+ (void)initialize;

@end
