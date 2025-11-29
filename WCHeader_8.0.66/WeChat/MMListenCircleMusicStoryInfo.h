@class NSString, MMListenCircleFinderInfo, MMListenCircleMpInfo, MMListenSimplePlaylistInfo;

@interface MMListenCircleMusicStoryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *abstract;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) MMListenCircleFinderInfo *finderInfo;
@property (retain, nonatomic) MMListenCircleMpInfo *mpInfo;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *playlistInfo;

+ (void)initialize;

@end
