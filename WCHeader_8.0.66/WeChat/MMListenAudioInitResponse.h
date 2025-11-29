@class MMListenAudioMpConfig, NSData, NSMutableArray, BaseResponse;

@interface MMListenAudioInitResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long intervalMs;
@property (retain, nonatomic) NSMutableArray *exptBuffers;
@property (retain, nonatomic) MMListenAudioMpConfig *mpConfig;

+ (void)initialize;

@end
