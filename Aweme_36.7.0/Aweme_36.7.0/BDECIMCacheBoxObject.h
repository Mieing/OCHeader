@protocol NSCoding;

@interface BDECIMCacheBoxObject : NSObject <NSCoding>

@property (nonatomic) double validityPeriod;
@property (nonatomic) double cacheTime;
@property (retain, nonatomic) id<NSCoding> cacheObject;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
