@class FinderLiveRealnameLikeBubbleInfo;

@interface FinderLiveRealnameLikeClientBubble : WXPBGeneratedMessage

@property (nonatomic) BOOL enableClientBubble;
@property (retain, nonatomic) FinderLiveRealnameLikeBubbleInfo *bubbleInfo;
@property (nonatomic) unsigned int likeCountLimit;
@property (nonatomic) BOOL showAfterJoinlive;

+ (void)initialize;

@end
