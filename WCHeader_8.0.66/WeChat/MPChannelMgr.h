@class MemoryMappedKV, MPChannelGetEntryDataTask, NSString;

@interface MPChannelMgr : MMUserService <MMImageLoaderObserver, IExptServiceExt, MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (retain, nonatomic) MPChannelGetEntryDataTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)dealloc;
- (BOOL)isTopBarChannelOpen;
- (id)tryGetLocalTopBarChannelEntryData;
- (void)updateEntryWhenOpenChannelWeApp;
- (void)advanceCheckUpdateEntry:(unsigned int)a0;
- (void)checkUpdateEntryWhenEnterBrandTimeline;
- (void)checkUpdateEntryWhenEnterBrandSession:(id)a0;
- (void)checkUpdateEntryWhenEnterVideoPage:(id)a0;
- (BOOL)checkTimelineUpdateTimeout;
- (void)checkUpdateEntry:(id)a0 videoPageUrl:(id)a1 scene:(unsigned int)a2;
- (void)handleGetChannelEntryDataResp:(BOOL)a0 entryData:(id)a1 strategyInfo:(id)a2 isPrefetch:(BOOL)a3;
- (BOOL)isChannelABtestOpen;
- (id)tryGetLocalChannelEntryData;
- (void)updateEntryData:(id)a0;
- (void)updateStrategyInfo:(id)a0;
- (id)getStrategyInfo;
- (void)prefetchEntryLogoImage;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)getWeAppChannelFeedsData;
- (void)checkAndUpdateWeAppChannelFeeds;
- (BOOL)shouldUpdateEntryWhenBrandCellExpose;
- (BOOL)shouldUpdateWhenMainSessionTabSwitch;
- (BOOL)shouldUpdateWhenEnterBrandSession;
- (BOOL)shouldUpdateWhenEnterVideoPage;
- (BOOL)shouldAutoSwitchDefaultLogo;
- (unsigned long long)getChannelAbTestOption;
- (void)resetMappedKv;
- (id)getChannelAppId;
- (void)updateWeAppChannelFeeds:(id)a0;
- (void).cxx_destruct;

@end
