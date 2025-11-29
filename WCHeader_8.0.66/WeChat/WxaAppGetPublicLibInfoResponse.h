@class NSString, BaseResponse;

@interface WxaAppGetPublicLibInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int forceUpdate;
@property (nonatomic) unsigned int needUpdate;
@property (retain, nonatomic) NSString *patchUrl;

+ (void)initialize;

@end
