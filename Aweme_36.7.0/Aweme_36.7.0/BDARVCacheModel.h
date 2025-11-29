@class NSData;

@interface BDARVCacheModel : NSObject

@property (retain, nonatomic) NSData *BDARData;
@property (nonatomic) long long BDAREnterFrom;
@property (nonatomic) long long BDARCacheFrom;
@property (nonatomic) BOOL BDARGeckoReady;

- (id)BDARInitWithData:(id)a0 enterFrom:(long long)a1 cacheFrom:(long long)a2 geckoReady:(BOOL)a3;
- (void).cxx_destruct;

@end
