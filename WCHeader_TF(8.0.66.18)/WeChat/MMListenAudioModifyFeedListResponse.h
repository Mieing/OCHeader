@class MMListenAudioBaseResponse, NSString, BaseResponse;

@interface MMListenAudioModifyFeedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;
@property (retain, nonatomic) NSString *listenId;

+ (void)initialize;

@end
