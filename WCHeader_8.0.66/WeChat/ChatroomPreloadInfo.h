@class JumpInfo;

@interface ChatroomPreloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) JumpInfo *preloadProfileJumpInfo;
@property (retain, nonatomic) JumpInfo *preloadCreateAccountJumpInfo;
@property (retain, nonatomic) JumpInfo *preloadPremadeH5JumpInfo;

+ (void)initialize;

@end
