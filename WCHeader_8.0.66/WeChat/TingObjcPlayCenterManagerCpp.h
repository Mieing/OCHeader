@class NSString;

@interface TingObjcPlayCenterManagerCpp : TingApiPlayCenterManagerCpp <TingObjcPlayCenterManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)onManagerInit:(id /* block */)a0;
- (void)onManagerClearData:(id /* block */)a0;
- (void)onCategoryItemUpdated:(id)a0 callback:(id /* block */)a1;
- (void)applyTapePlayingInfo:(id)a0 callback:(id /* block */)a1;
- (void)updateCurTapePlayingInfo:(id)a0 playingInfo:(id)a1 callback:(id /* block */)a2;
- (void)getRecentTapeInfoList:(id /* block */)a0;
- (id)getRecentTapeInfoListSync;
- (void)checkUpdateRecentTapeInfoList:(id /* block */)a0;
- (void)callDeleteRecentTapeInfo:(unsigned long long)a0 tapeId:(id)a1 callback:(id /* block */)a2;
- (void)deleteRecentTapeInfo:(id)a0 callback:(id /* block */)a1;
- (void)clearLastTapePlayingInfo:(id /* block */)a0;
- (void)getLastTapePlayingInfo:(id /* block */)a0;
- (id)getLastCategoryTapePlayingInfoSync;
- (void)getLastCategoryTapePlayingInfo:(id /* block */)a0;
- (id)getPreviousTapePlayingInfoSync;
- (void)getPreviousTapePlayingInfo:(id /* block */)a0;
- (id)getContiniousTapePlayingInfoSync:(id)a0;
- (void)getContiniousTapePlayingInfo:(id)a0 callback:(id /* block */)a1;
- (void)getLastPlayingInfoStatus:(id)a0 callback:(id /* block */)a1;
- (id)getDefaultRecommendCategoryItemSync;

@end
