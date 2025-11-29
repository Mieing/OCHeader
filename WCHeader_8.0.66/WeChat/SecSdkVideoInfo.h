@class NSString;

@interface SecSdkVideoInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int videoPlayLength;
@property (nonatomic) unsigned int videoSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *externalFilename;
@property (nonatomic) unsigned int watermarkFlag;

+ (void)initialize;

@end
