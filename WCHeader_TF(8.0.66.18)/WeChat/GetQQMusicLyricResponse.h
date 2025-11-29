@class SKBuiltinBuffer_t, BaseResponse;

@interface GetQQMusicLyricResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *songLyric;
@property (retain, nonatomic) SKBuiltinBuffer_t *songAlbum;
@property (retain, nonatomic) SKBuiltinBuffer_t *songAlbumUrl;

+ (void)initialize;

@end
