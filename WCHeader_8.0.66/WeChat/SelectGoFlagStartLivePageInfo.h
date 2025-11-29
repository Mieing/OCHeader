@class NSString;

@interface SelectGoFlagStartLivePageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned int source;
@property (nonatomic) BOOL bizEnable;
@property (retain, nonatomic) NSString *bizQrcodeUrl;

+ (void)initialize;

@end
