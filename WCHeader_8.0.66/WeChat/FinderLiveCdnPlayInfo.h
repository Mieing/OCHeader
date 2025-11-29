@class NSData;

@interface FinderLiveCdnPlayInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *qualityTagCacheBuf;
@property (nonatomic) unsigned int failedSvrCfg;
@property (nonatomic) unsigned int failedMainFlag;
@property (nonatomic) unsigned int failedBackFlag;
@property (nonatomic) int sdkErrCode;
@property (nonatomic) unsigned int manualSwitchCfg;
@property (nonatomic) int playerEventId;
@property (nonatomic) unsigned int currentSvrCfg;

+ (void)initialize;

@end
