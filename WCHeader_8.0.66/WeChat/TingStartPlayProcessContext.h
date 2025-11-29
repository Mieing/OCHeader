@class TingAudioProperties;

@interface TingStartPlayProcessContext : WXPBGeneratedMessage

@property (nonatomic) BOOL isCheckSpamFromCache;
@property (nonatomic) BOOL isGetLinkFromCache;
@property (nonatomic) unsigned int playerKernelType;
@property (nonatomic) unsigned int categoryStartScene;
@property (nonatomic) unsigned long long audioDuration;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) unsigned int initNetworkType;
@property (retain, nonatomic) TingAudioProperties *audioProperties;
@property (nonatomic) BOOL isDataPreload;
@property (nonatomic) BOOL isHitDownloadedCache;
@property (nonatomic) BOOL isEnableHearingAid;

+ (void)initialize;

@end
