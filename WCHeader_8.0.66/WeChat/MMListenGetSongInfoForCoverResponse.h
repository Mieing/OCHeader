@class MMListenSongInfoForCover, BaseResponse;

@interface MMListenGetSongInfoForCoverResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenSongInfoForCover *songInfoForCover;

+ (void)initialize;

@end
