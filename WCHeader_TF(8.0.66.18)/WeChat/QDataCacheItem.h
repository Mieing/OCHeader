@class NSData, NSString;

@interface QDataCacheItem : NSObject

@property (nonatomic) int sourceType;
@property (nonatomic) struct { long long x; long long y; short z; long long language; } tile;
@property (retain, nonatomic) NSData *tileData;
@property (nonatomic) BOOL shouldUpdateData;
@property (retain, nonatomic) NSString *cacheStyleid;
@property (retain, nonatomic) NSString *cacheVersion;
@property (retain, nonatomic) NSString *tileVersion;
@property (retain, nonatomic) NSString *tileSignature;

- (void).cxx_destruct;

@end
