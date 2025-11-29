@class NSString;

@interface TPDLProxyInitParam : NSObject

@property (nonatomic) int platform;
@property (copy, nonatomic) NSString *appVer;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *dataDir;
@property (copy, nonatomic) NSString *configStr;
@property (nonatomic) int checkTimeout;
@property (nonatomic) int localServerCheckTimeInterval;
@property (nonatomic) BOOL enableCheckLocalServer;
@property (nonatomic) BOOL enableCheckLocalServerOnCreate;

- (id)initWithPlatform:(int)a0 appVer:(id)a1 guid:(id)a2;
- (id)initWithPlatform:(int)a0 appVer:(id)a1 guid:(id)a2 dataDir:(id)a3;
- (id)initWithPlatform:(int)a0 appVer:(id)a1 guid:(id)a2 cacheDir:(id)a3 dataDir:(id)a4 configStr:(id)a5;
- (void).cxx_destruct;

@end
