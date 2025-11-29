@class HTSLiveMultiChorusUpdateMessage;

@interface HTSLiveKtvMultiChorusSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMultiChorusUpdateMessage *updateMsg;
@property (nonatomic) BOOL hasUpdateMsg;

+ (id)descriptor;

@end
