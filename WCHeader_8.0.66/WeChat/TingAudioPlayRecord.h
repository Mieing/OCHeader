@class NSString;

@interface TingAudioPlayRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) int finishPlayCount;

+ (void)initialize;

@end
