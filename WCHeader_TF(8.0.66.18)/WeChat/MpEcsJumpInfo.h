@class EcsJumpInfo, NSString;

@interface MpEcsJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) EcsJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *shopAppid;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *encryptProductKey;

+ (void)initialize;

@end
