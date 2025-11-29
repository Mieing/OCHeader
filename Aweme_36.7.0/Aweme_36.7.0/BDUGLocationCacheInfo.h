@class NSError, BDUGLocationInfo;

@interface BDUGLocationCacheInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BDUGLocationInfo *locationInfo;
@property (nonatomic) long long accuracy;
@property (nonatomic) double timeStamp;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL shouldNotUseCache;

- (id)initWithLocationInfo:(id)a0 accuracy:(long long)a1 timestamp:(double)a2 error:(id)a3 shouldNotUseCache:(BOOL)a4;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
