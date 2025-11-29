@class MMListenAudioBaseResponse, MMListenMusicBaseResponse, NSMutableArray, BaseResponse;

@interface MMListenCategoryFeedResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;
@property (retain, nonatomic) NSMutableArray *lines;

+ (void)initialize;

@end
