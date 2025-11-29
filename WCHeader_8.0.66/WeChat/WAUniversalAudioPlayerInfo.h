@class WAUniversalAudioInfo;

@interface WAUniversalAudioPlayerInfo : NSObject

@property (nonatomic) unsigned long long playerState;
@property (retain, nonatomic) WAUniversalAudioInfo *audioInfo;

- (void).cxx_destruct;

@end
