@class NSString, NSMutableArray, BaseResponse;

@interface PreGetDownloadUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *packageInfoList;

+ (void)initialize;

@end
