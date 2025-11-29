@class NSString;

@interface TPProxyServiceConfig : NSObject <NSCopying>

@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSString *cacheDir;
@property (retain, nonatomic) NSString *dataDir;
@property (nonatomic) long long maxUseMemoryMB;
@property (nonatomic) long long maxUseStorageMB;
@property (nonatomic) BOOL vodCachedEnable;
@property (nonatomic) BOOL reportEnable;
@property (retain, nonatomic) NSString *initConfig;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
