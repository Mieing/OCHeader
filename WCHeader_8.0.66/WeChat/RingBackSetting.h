@class NSString;

@interface RingBackSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned long long finderObjectId;
@property (retain, nonatomic) NSString *finderNonceId;
@property (nonatomic) unsigned int startTs;
@property (nonatomic) unsigned int endTs;

+ (void)initialize;

- (void)setEndTs:(unsigned int)a0;
- (unsigned int)endTs;
- (void)setStartTs:(unsigned int)a0;
- (unsigned int)startTs;
- (void)setFinderNonceId:(id)a0;
- (id)finderNonceId;
- (void)setFinderObjectId:(unsigned long long)a0;
- (unsigned long long)finderObjectId;

@end
