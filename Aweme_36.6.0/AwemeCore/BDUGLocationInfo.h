@class NSString, CLLocation, BDUGPlacemark;

@interface BDUGLocationInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *locateId;
@property (copy, nonatomic) NSString *serverLogId;
@property (readonly, nonatomic) long long type;
@property (nonatomic) long long source;
@property (readonly, nonatomic) BOOL isCache;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) CLLocation *safeLocation;
@property (readonly, copy, nonatomic) BDUGPlacemark *placeMark;
@property (readonly, nonatomic) long long dataLevel;
@property (readonly, nonatomic) double timestamp;
@property (nonatomic) double locTime;

- (id)initWithType:(long long)a0 source:(long long)a1 location:(id)a2 safeLocation:(id)a3 placemark:(id)a4 dataLevel:(long long)a5 timestamp:(double)a6 locateId:(id)a7 serverLogId:(id)a8;
- (id)complianceInfo;
- (id)noLocationInfo;
- (id)initWithType:(long long)a0 source:(long long)a1 isCache:(BOOL)a2 location:(id)a3 safeLocation:(id)a4 placemark:(id)a5 dataLevel:(long long)a6 timestamp:(double)a7 locTime:(double)a8 locateId:(id)a9 serverLogId:(id)a10;
- (id)initComplianceWithLocationInfo:(id)a0;
- (id)initCacheWithLocationInfo:(id)a0;
- (id)initNoLocationWithLocationInfo:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)cacheInfo;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
