@class NSString;

@interface BizAiScanCdnImg : WXPBGeneratedMessage

@property (nonatomic) unsigned int cdnImgSrc;
@property (nonatomic) unsigned int w;
@property (nonatomic) unsigned int h;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int cdnStatus;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int encIdx;
@property (nonatomic) unsigned long long encKey;

+ (void)initialize;

@end
