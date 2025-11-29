@class MMListenJumpInfo;

@interface MMListenSongOriginInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;
@property (nonatomic) int originExplicitState;

+ (void)initialize;

@end
