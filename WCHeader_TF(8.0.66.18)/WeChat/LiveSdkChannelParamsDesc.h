@class LiveSdkChannelParams, NSString;

@interface LiveSdkChannelParamsDesc : WXPBGeneratedMessage

@property (retain, nonatomic) LiveSdkChannelParams *channelParams;
@property (retain, nonatomic) NSString *streamId;
@property (retain, nonatomic) NSString *viewDesc;
@property (nonatomic) unsigned int viewOrder;
@property (retain, nonatomic) NSString *coverUrl;

+ (void)initialize;

@end
