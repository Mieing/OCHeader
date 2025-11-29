@class EcsImg, EcsJumpInfo;

@interface FinderFeedEcProductCard_MediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) EcsImg *url;
@property (retain, nonatomic) EcsJumpInfo *ecsJumpInfo;

+ (void)initialize;

@end
