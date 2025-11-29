@class NSString, NSData, MMListenTTSSentenceInfo;

@interface TingPlayItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSData *finderInfo;
@property (nonatomic) BOOL isTry;
@property (nonatomic) int qualityType;
@property (nonatomic) BOOL isHls;
@property (nonatomic) int estimatedDuration;
@property (retain, nonatomic) NSString *refer;
@property (retain, nonatomic) MMListenTTSSentenceInfo *ttsSentenceInfo;
@property (nonatomic) BOOL isStreamMp3;
@property (retain, nonatomic) NSString *encryptKey;
@property (nonatomic) BOOL shouldVoicePlay;
@property (nonatomic) BOOL ableVoicePlay;
@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL disbaleAudioSession;
@property (nonatomic) BOOL isOnlyStream;

+ (void)initialize;

- (BOOL)isPlayable;

@end
