@class NSString, NSArray;

@interface MuteBrandMgr : MMUserService <IUpdateProfileMgrExt, MMServiceProtocol, PBMessageObserverDelegate> {
    NSArray *_openBrandList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)showGuideView:(id)a0;
- (BOOL)useBizMuteFlag;
- (void)openUseBizMuteFlagWith:(id)a0;
- (void)updateUnreadCount;
- (void)updateUnreadCount:(BOOL)a0;
- (void)requestUseBizMuteFlag;
- (void)onFailOpenUseBizMuteFlag;
- (void)onProfileChange;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
