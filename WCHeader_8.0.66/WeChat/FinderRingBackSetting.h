@class NSString;

@interface FinderRingBackSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned long long finderObjectId;
@property (retain, nonatomic) NSString *finderNonceId;

+ (void)initialize;

- (void)setFinderNonceId:(id)a0;
- (id)finderNonceId;
- (void)setFinderObjectId:(unsigned long long)a0;
- (unsigned long long)finderObjectId;

@end
