@class FavConfig, BaseResponse;

@interface GetFavInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long usedSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned int mxFavFileSize;
@property (nonatomic) unsigned int mxAutoUploadSize;
@property (nonatomic) unsigned int mxAutoDownloadSize;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long buyDate;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int payChannel;
@property (retain, nonatomic) FavConfig *config;

+ (void)initialize;

@end
