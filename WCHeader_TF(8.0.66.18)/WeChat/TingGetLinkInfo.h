@class MMListenPlayResponse, NSData, MMListenAudioGetTTSInfoResponse;

@interface TingGetLinkInfo : WXPBGeneratedMessage

@property (nonatomic) int listenItemType;
@property (retain, nonatomic) MMListenPlayResponse *listenPlayInfo;
@property (retain, nonatomic) NSData *finderInfo;
@property (retain, nonatomic) MMListenAudioGetTTSInfoResponse *audioGetTtsinfoResponse;

+ (void)initialize;

@end
