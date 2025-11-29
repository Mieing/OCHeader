@class MMListenCircleFinderInfo, MMListenSimplePlayableInfo, MMListenCircleMpInfo, MMListenCircleMusicStoryInfo, MMListenCircleCategoryInfo, MMListenCircleCoverSongInfo, MMListenCircleHotCommentInfo, NSData, MMListenSimplePlaylistInfo, MMListenCircleListenInfo, MMListenCircleDescByAuthorInfo, MMListenCircleLinkInfo;

@interface MMListenCircleAttachmentInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) MMListenCircleListenInfo *listenInfo;
@property (retain, nonatomic) MMListenCircleCategoryInfo *playlist;
@property (retain, nonatomic) MMListenSimplePlayableInfo *playableInfo;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *playlistInfo;
@property (retain, nonatomic) MMListenCircleFinderInfo *finderInfo;
@property (retain, nonatomic) MMListenCircleLinkInfo *linkInfo;
@property (retain, nonatomic) MMListenCircleMpInfo *mpInfo;
@property (retain, nonatomic) MMListenCircleCoverSongInfo *coverSongInfo;
@property (retain, nonatomic) MMListenCircleMusicStoryInfo *musicStoryInfo;
@property (retain, nonatomic) MMListenCircleDescByAuthorInfo *descByAuthorInfo;
@property (retain, nonatomic) MMListenCircleHotCommentInfo *hotCommentInfo;
@property (retain, nonatomic) NSData *ctxRecommendInfoBuffer;

+ (void)initialize;

@end
