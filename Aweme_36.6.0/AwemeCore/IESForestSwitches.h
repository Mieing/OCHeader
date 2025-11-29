@class NSNumber;

@interface IESForestSwitches : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSNumber *enableStreamLoad;
@property (retain, nonatomic) NSNumber *enableHttpHeader;
@property (retain, nonatomic) NSNumber *enableLooseLimit;
@property (retain, nonatomic) NSNumber *enableFixCORS;
@property (retain, nonatomic) NSNumber *isSync;
@property (retain, nonatomic) NSNumber *enableReadableStreamCDNFetcher;
@property (retain, nonatomic) NSNumber *waitSynchronously;
@property (retain, nonatomic) NSNumber *enableGeckoOfflineCDN;
@property (retain, nonatomic) NSNumber *delegateUpdateByGecko;
@property (retain, nonatomic) NSNumber *fixContentType;
@property (retain, nonatomic) NSNumber *fixWebviewResponse;
@property (retain, nonatomic) NSNumber *skipSSLCertificateError;
@property (retain, nonatomic) NSNumber *handleSSLError;
@property (retain, nonatomic) NSNumber *useFalconMigrationPrefix;
@property (retain, nonatomic) NSNumber *useTTNetWorkDownloader;
@property (retain, nonatomic) NSNumber *useNSURLSession;
@property (retain, nonatomic) NSNumber *syncCookieFromWKToNS;
@property (retain, nonatomic) NSNumber *enableImageFetcher;

- (void)mergeWithSwitches:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
