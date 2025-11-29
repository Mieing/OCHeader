@class NSString, NSMutableDictionary, NSDictionary;

@interface AlibcTradeMiniSDKConfigService : NSObject

@property (retain, nonatomic) NSMutableDictionary *localConfig;
@property (copy, nonatomic) NSString *localConfigFile;
@property (copy, nonatomic) NSDictionary *sdkConfig;
@property (copy) NSString *systemVersion;

+ (id)sharedConfig;

- (id)dictionaryToJson:(id)a0;
- (void)utTrack:(id)a0 result:(id)a1;
- (id)configConvertServerHost;
- (id)testSDKFunc:(id)a0;
- (id)ttid;
- (void)loadLocalConfig;
- (id)getSDKConfig;
- (id)configSDKConfigServerHost;
- (BOOL)checkIsTradeConfigLegal:(id)a0;
- (void)refleshSomeConfig:(id)a0;
- (BOOL)writeToFile:(id)a0 contents:(id)a1;
- (id)processParseObject:(id)a0;
- (id)processParsedObject:(id)a0 Str:(id)a1;
- (id)readFileData:(id)a0;
- (BOOL)creatFile:(id)a0;
- (id)mockSDKVersion;
- (void).cxx_destruct;
- (id)init;
- (void)updateConfig;

@end
