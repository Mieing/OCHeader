@class NSData;

@interface LiveJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int liveJumpinfoType;
@property (retain, nonatomic) NSData *liveJumpinfoParams;
@property (retain, nonatomic) NSData *liveJumpinfoCgiBuff;

+ (void)initialize;

@end
