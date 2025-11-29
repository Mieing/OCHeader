@class NSString;

@interface HbRecvRecord_Cover : WXPBGeneratedMessage

@property (nonatomic) BOOL enableSetStatus;
@property (retain, nonatomic) NSString *pagNam;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *videoThumbUrl;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *wishKeyWord;

+ (void)initialize;

@end
