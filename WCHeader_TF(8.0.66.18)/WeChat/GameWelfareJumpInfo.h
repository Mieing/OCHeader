@class H5JumpInfo, GameWelfareWxaJumpInfo;

@interface GameWelfareJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) GameWelfareWxaJumpInfo *wxaJumpInfo;
@property (retain, nonatomic) H5JumpInfo *h5JumpInfo;

+ (void)initialize;

@end
