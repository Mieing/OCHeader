@class NSString;

@interface AWEVideoPlayBitrateControler : NSObject <AWEVideoDownloadDelegate, IESVideoBSControllerDelegate, IESVideoBSNetworkDelegate, IESVideoPreloadSpeedProtocol, AWESettingsComboRequestProtocol>

@property (nonatomic) long long IESVideoBSNetworkProfilerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (void)setupWithoutRequest;
+ (void)updateSettingsWithDictionaryCore:(id)a0;
+ (void)asynBitrateSettingJsonModel:(id)a0;
+ (id)sharedInstance;
+ (void)setup;
+ (void)setEnabled:(BOOL)a0;

- (void)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
- (void)currentConfigDidNotChange:(id)a0 networkSpeed:(unsigned long long)a1;
- (void)currentConfigDidChangeFrom:(id)a0 to:(id)a1 networkSpeed:(unsigned long long)a2;
- (void)localServerTestSpeedInfo:(double)a0 size:(long long)a1;
- (void)videoDidDownloadDataLength:(unsigned long long)a0 interval:(double)a1;
- (long long)getIESVideoBSNetworkProfilerType;
- (id)liveModuleService;
- (void)updateBitrateConfiguration;
- (void)dealloc;

@end
