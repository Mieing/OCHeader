@class LiveSdkInfo;

@interface FinderLiveMultiStreamSyncExtraInfoResp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned int noOp;
@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;

+ (void)initialize;

@end
