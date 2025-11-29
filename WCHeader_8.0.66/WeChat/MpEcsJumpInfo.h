@class EcsJumpInfo, NSString;

@interface MpEcsJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) EcsJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *shopAppid;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *encryptProductKey;

+ (void)initialize;

- (void)setEncryptProductKey:(id)a0;
- (id)encryptProductKey;
- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setShopAppid:(id)a0;
- (id)shopAppid;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setProductId:(unsigned long long)a0;
- (unsigned long long)productId;

@end
