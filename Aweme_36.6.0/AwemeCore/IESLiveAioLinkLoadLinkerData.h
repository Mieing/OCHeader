@class IESLiveAioLinkLinkerLogInfo;

@interface IESLiveAioLinkLoadLinkerData : IESLivePBBaseMessage

@property (nonatomic) long long scene;
@property (nonatomic) long long channelId;
@property (retain, nonatomic) IESLiveAioLinkLinkerLogInfo *logInfo;
@property (nonatomic) BOOL hasLogInfo;
@property (nonatomic) BOOL isStarter;

+ (id)descriptor;

@end
