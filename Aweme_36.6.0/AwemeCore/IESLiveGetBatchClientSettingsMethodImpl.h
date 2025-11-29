@protocol IESLiveSettings;

@interface IESLiveGetBatchClientSettingsMethodImpl : IESLiveGetBatchClientSettingsMethod

@property (retain, nonatomic) id<IESLiveSettings> settings;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (Class)classForType:(long long)a0;

@end
