@interface PreloadMsgInfo : NSObject <NSCopying>

@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int sequenceId;
@property (nonatomic) unsigned int localId;

+ (id)infoWithMsgWrap:(id)a0;
+ (id)infoWithCreateTime:(unsigned int)a0 sequenceId:(unsigned int)a1 localId:(unsigned int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compareWithOtherMsgInfo:(id)a0;
- (long long)compareWithCreateTime:(unsigned int)a0 sequenceId:(unsigned int)a1 localId:(unsigned int)a2;
- (BOOL)isGreaterThan:(id)a0;
- (BOOL)isGreaterThanOrEqualTo:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)isSmallerThanOrEqualTo:(id)a0;
- (BOOL)isSmallerThan:(id)a0;
- (id)description;

@end
