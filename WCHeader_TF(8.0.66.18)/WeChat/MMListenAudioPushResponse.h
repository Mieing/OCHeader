@class AudioPushConfig, NSData, NSMutableArray, BaseResponse;

@interface MMListenAudioPushResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) AudioPushConfig *pushConfig;
@property (retain, nonatomic) NSMutableArray *pushContent;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
