@class NSString;

@interface FavCDNItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dataId;
@property (retain, nonatomic) NSString *fullMd5;
@property (retain, nonatomic) NSString *head256Md5;
@property (nonatomic) unsigned int fullSize;
@property (retain, nonatomic) NSString *cdnurl;
@property (retain, nonatomic) NSString *aeskey;
@property (nonatomic) int encryVer;
@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) int status;
@property (nonatomic) int dataStatus;

+ (void)initialize;

@end
