@class NSString;

@interface NewLifeStartCdnUploadReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) unsigned int appType;
@property (retain, nonatomic) NSString *fullPath;
@property (nonatomic) unsigned int bizScene;
@property (retain, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) NSString *customHeader;

+ (void)initialize;

@end
