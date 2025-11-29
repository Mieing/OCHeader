@class NSString, NSDictionary, NSNumber;

@interface BDXResourceLoaderConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessKey;
@property (copy) NSDictionary *akToPrefixList;
@property (copy) NSDictionary *defaultPrefixToAk;
@property (retain, nonatomic) NSNumber *disableGurd;
@property (retain, nonatomic) NSNumber *disableBuildin;
@property (retain, nonatomic) NSNumber *disableGurdUpdate;
@property (retain, nonatomic) NSNumber *useMemoryCache;
@property (retain, nonatomic) NSNumber *enableDownloaderNegotiation;
@property (nonatomic) long long gurdDownloadPrority;
@property (nonatomic) BOOL disableGurdThrottle;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
