@class NSData;

@interface IESECWinCacheModel : NSObject <NSCopying, NSCoding>

@property (nonatomic) double updateTime;
@property (nonatomic) double expireInterval;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;
- (BOOL)hasExpired;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
