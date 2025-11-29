@class SKBuiltinBuffer_t;

@interface RemindFriendsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int adgroupId;
@property (retain, nonatomic) SKBuiltinBuffer_t *sourceInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *selfInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *paidInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *extraInfo;
@property (nonatomic) unsigned long long adgroupId64;

+ (void)initialize;

- (void)setAdgroupId64:(unsigned long long)a0;
- (unsigned long long)adgroupId64;
- (void)setExtraInfo:(id)a0;
- (id)extraInfo;
- (void)setPaidInfo:(id)a0;
- (id)paidInfo;
- (void)setSelfInfo:(id)a0;
- (id)selfInfo;
- (void)setSourceInfo:(id)a0;
- (id)sourceInfo;
- (void)setAdgroupId:(unsigned int)a0;
- (unsigned int)adgroupId;

@end
