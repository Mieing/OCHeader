@class NSString;

@interface BizLiteAppInfo_Args : WXPBGeneratedMessage

@property (nonatomic) unsigned int downloadTimeout;
@property (nonatomic) BOOL checkUpdate;
@property (nonatomic) BOOL syncCheck;
@property (nonatomic) unsigned int openType;
@property (nonatomic) unsigned int height;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL waitDownload;
@property (nonatomic) BOOL forbidRightGesture;
@property (retain, nonatomic) NSString *minVersion;
@property (nonatomic) BOOL withDownloadLoading;
@property (nonatomic) unsigned int delayTime;
@property (nonatomic) float heightPercent;

+ (void)initialize;

@end
