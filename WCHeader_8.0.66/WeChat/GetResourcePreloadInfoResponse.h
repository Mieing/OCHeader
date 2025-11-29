@class NSString, BaseResponse;

@interface GetResourcePreloadInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int preloadPercentage;
@property (retain, nonatomic) NSString *key;

+ (void)initialize;

@end
