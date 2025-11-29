@class NSString, BaseResponse;

@interface GetWxaAppCDNDownloadUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int lifespan;
@property (retain, nonatomic) NSString *patchUrl;
@property (retain, nonatomic) NSString *zstdUrl;

+ (void)initialize;

@end
