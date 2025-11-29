@class NSString;

@interface OnlineCollectCdnDataInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *palmFileId;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *encryptPalmFileKey;
@property (retain, nonatomic) NSString *palmImageMd5;
@property (retain, nonatomic) NSString *palmLivenessImageMd5;
@property (retain, nonatomic) NSString *palmVideoMd5;

+ (void)initialize;

@end
