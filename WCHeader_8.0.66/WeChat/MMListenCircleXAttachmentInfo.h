@class NSData, NSString, MMListenSimplePlayableInfo, MMListenCircleXListenInfo, MMListenSingerInfo, MMListenSimplePlaylistInfo, MMListenCircleXFinderInfo, MMListenCircleAlbumInfo;

@interface MMListenCircleXAttachmentInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *linkUrl;
@property (retain, nonatomic) MMListenCircleXListenInfo *listenInfo;
@property (retain, nonatomic) MMListenCircleXFinderInfo *finderInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MMListenSimplePlayableInfo *playableInfo;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *playlistInfo;
@property (retain, nonatomic) MMListenCircleAlbumInfo *albumInfo;
@property (nonatomic) unsigned int picWidth;
@property (nonatomic) unsigned int picHeight;
@property (retain, nonatomic) NSData *ctxRecommendInfoBuffer;
@property (retain, nonatomic) MMListenSingerInfo *singerInfo;

+ (void)initialize;

@end
