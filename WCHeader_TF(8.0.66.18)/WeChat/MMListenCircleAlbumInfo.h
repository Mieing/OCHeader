@class MMListenUserInfoX, MMListenSimplePlaylistInfo;

@interface MMListenCircleAlbumInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenSimplePlaylistInfo *album;
@property (retain, nonatomic) MMListenUserInfoX *authorInfo;

+ (void)initialize;

@end
