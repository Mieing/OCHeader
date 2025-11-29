@class NSData;

@interface FinderHotWordJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpDest;
@property (nonatomic) unsigned int jumpScene;
@property (retain, nonatomic) NSData *jumpBypassInfo;

+ (void)initialize;

@end
