@class NSArray, BDPXPlaySingleSettingsModel;

@interface BDPXPlayBusinessEngine : BDPNativeGameBusinessEngine

@property (retain, nonatomic) BDPXPlaySingleSettingsModel *settings;
@property (retain, nonatomic) NSArray *interceptMethodList;

- (id)getSettings;
- (void)subscribeHandler:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)invoke:(id)a0 apiName:(id)a1 apiParams:(id)a2 completion:(id /* block */)a3;
- (id)resetInterceptEvent:(id)a0;
- (id)resetInterceptDataWithEvent:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
