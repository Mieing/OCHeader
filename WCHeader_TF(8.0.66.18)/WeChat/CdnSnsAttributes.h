@class NSString;

@interface CdnSnsAttributes : WXPBGeneratedMessage

@property (nonatomic) BOOL isColddata;
@property (nonatomic) BOOL isHotdata;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long decryptKey;

+ (void)initialize;

@end
