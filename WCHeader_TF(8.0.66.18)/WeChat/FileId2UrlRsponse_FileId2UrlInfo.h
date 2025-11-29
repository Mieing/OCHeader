@class NSString;

@interface FileId2UrlRsponse_FileId2UrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileid;
@property (nonatomic) unsigned int filetype;
@property (nonatomic) int hitStatus;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
