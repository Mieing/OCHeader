@class NSString;
@protocol TTVideoEngineNetClient;

@interface TTVideoEngineSettings : NSObject

@property (copy, nonatomic) NSString *playerVersion;
@property (copy, nonatomic) NSString *mdlVersion;
@property (copy, nonatomic) NSString *strategyVersion;
@property (copy, nonatomic) NSString *settingsVersion;
@property (copy, nonatomic) NSString *engineVersion;
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) id<TTVideoEngineNetClient> netClient;
@property (copy, nonatomic) NSString *usEast;
@property (copy, nonatomic) NSString *sgSingapore;
@property (copy, nonatomic) NSString *cnNorth;

+ (id)manager;
+ (id)settings;

- (id /* block */)setDebug;
- (id)getVodNumber:(id)a0 dValue:(id)a1;
- (id)getVodDict:(id)a0;
- (id /* block */)setEnable;
- (id /* block */)setNetClient;
- (id /* block */)setUSEast;
- (id /* block */)setSGSingapore;
- (id /* block */)setCNNorth;
- (void)start:(id)a0 queries:(id)a1 result:(id /* block */)a2;
- (id)getVodString:(id)a0 dValue:(id)a1;
- (id)getVodArray:(id)a0 dValue:(id)a1;
- (id)getMDLNumber:(id)a0 dValue:(id)a1;
- (id)getMDLString:(id)a0 dValue:(id)a1;
- (id)getMDLDict:(id)a0;
- (id)getMDLArray:(id)a0 dValue:(id)a1;
- (id)getJson:(long long)a0;
- (id /* block */)config;
- (id /* block */)load;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
