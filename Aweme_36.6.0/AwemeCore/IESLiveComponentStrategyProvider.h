@class NSDictionary, IESLiveComponentStrategyEntity;

@interface IESLiveComponentStrategyProvider : NSObject

@property (retain, nonatomic) NSDictionary *strategyConfig;
@property (retain, nonatomic) IESLiveComponentStrategyEntity *strategyEntity;
@property (retain, nonatomic) NSDictionary *originLoadConfig;
@property (retain, nonatomic) NSDictionary *loadConfig;
@property (retain, nonatomic) NSDictionary *settingConfig;
@property (nonatomic) BOOL ignoreMultiOrder;

- (BOOL)mainEnable;
- (id)liveStrategyConfig;
- (id)updatePreloadConfig:(id)a0;
- (void)loadStrategyWithCustomConfig:(id)a0;
- (void)loadStrategyWithResult:(long long)a0;
- (id)mergeRemoteSettingStrategyWithConfig:(id)a0;
- (BOOL)enableWithResult:(long long)a0;
- (id)mergeRemoteLoadStrategyWithConfig:(id)a0 result:(long long)a1;
- (void)parserConfig:(id)a0 entity:(id)a1;
- (id)mergeStrategyConfig:(id)a0 remoteConfig:(id)a1;
- (id)singleOrderWithName:(id)a0 locationInfo:(id)a1;
- (void)filterAddSingleOrder:(id)a0 intoArray:(id)a1;
- (id)trim:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
