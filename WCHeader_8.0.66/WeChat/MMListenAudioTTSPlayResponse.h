@class NSData, NSMutableArray, BaseResponse;

@interface MMListenAudioTTSPlayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *sentences;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
