@class NSString, JumpLiteAppInfo, BaseResponse;

@interface SearchTagJumpResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *weappUrl;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *webviewJson;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL disablePopups;
@property (retain, nonatomic) JumpLiteAppInfo *liteAppInfo;

+ (void)initialize;

@end
