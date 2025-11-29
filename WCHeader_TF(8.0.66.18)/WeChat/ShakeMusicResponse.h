@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface ShakeMusicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int musicId;
@property (nonatomic) float offset;
@property (retain, nonatomic) SKBuiltinBuffer_t *songName;
@property (retain, nonatomic) SKBuiltinBuffer_t *songSinger;
@property (retain, nonatomic) SKBuiltinBuffer_t *songAlbum;
@property (retain, nonatomic) SKBuiltinBuffer_t *songAlbumUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *songWifiUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *songWapLinkUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *songWebUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *songLyric;
@property (nonatomic) unsigned int resultType;
@property (nonatomic) unsigned int tvtype;
@property (retain, nonatomic) NSString *tvdescriptionXml;

+ (void)initialize;

@end
