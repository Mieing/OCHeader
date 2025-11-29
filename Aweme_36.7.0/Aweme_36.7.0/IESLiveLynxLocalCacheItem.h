@class NSString;

@interface IESLiveLynxLocalCacheItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *jsonData;
@property (nonatomic) double cacheTime;
@property (nonatomic) unsigned long long validSeconds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
