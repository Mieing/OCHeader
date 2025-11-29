@class NSString, MMListenAudioBaseResponse, BaseResponse;

@interface MMListenAddToPlaylistResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *baseListenId;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;

+ (void)initialize;

@end
