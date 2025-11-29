@class NSString;

@interface TingMusicRecentLineMgrCpp : UnitRCObjcBaseProxyClass <TingMusicRecentLineMgr>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)addListener:(id)a0;
- (BOOL)removeListener:(id)a0;
- (id)getRecentTapeInfoList;
- (void)appendRecentTapeInfo:(id)a0;
- (void)deleteRecentTapeInfo:(id)a0;
- (BOOL)checkUpdateRecentTapeInfoList:(BOOL)a0;
- (void)updateWithRecommendInfo:(id)a0;
- (BOOL)onCategoryItemUpdated:(id)a0;
- (BOOL)updateTopTapInfo:(id)a0 newInfo:(id)a1;

@end
