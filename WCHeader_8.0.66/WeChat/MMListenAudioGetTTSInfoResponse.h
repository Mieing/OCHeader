@class MMListenTTSMetaInfo, NSString, NSData, NSMutableArray, BaseResponse;

@interface MMListenAudioGetTTSInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSMutableArray *sentences;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned int ttsStatus;
@property (retain, nonatomic) NSString *fullPlayUrl;
@property (nonatomic) unsigned int playUrlExpireTime;
@property (nonatomic) unsigned int timeGap;
@property (retain, nonatomic) MMListenTTSMetaInfo *ttsMetaInfo;
@property (retain, nonatomic) NSData *audioBytes;

+ (void)initialize;

@end
