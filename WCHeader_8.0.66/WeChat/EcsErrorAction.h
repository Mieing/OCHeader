@class EcsJumpInfo;

@interface EcsErrorAction : WXPBGeneratedMessage

@property (nonatomic) unsigned int errActionCode;
@property (retain, nonatomic) EcsJumpInfo *errAction;

+ (void)initialize;

@end
