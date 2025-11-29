@class NSString;

@interface MMBizJsApiCdnInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *fileType;

+ (void)initialize;

@end
