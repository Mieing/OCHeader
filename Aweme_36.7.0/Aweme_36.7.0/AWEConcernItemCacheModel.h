@class NSString;

@interface AWEConcernItemCacheModel : NSObject <NSCoding>

@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *cachedAwemeID;

- (void)resetWithAwemeID:(id)a0 expireTime:(double)a1;
- (BOOL)removeAwemeID:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
