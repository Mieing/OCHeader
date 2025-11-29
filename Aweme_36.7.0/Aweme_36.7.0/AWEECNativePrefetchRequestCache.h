@class IESECNativePrefetchRes;

@interface AWEECNativePrefetchRequestCache : NSObject

@property (nonatomic) double requestTime;
@property (nonatomic) double expireTime;
@property (retain, nonatomic) IESECNativePrefetchRes *prefetchRes;

- (id)initWithPrefetchRes:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;

@end
