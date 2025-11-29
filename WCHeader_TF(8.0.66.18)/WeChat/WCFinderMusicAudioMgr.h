@class NSString, NSMutableSet;

@interface WCFinderMusicAudioMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *pages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)pushMonitorStack:(id)a0;
- (id)pageNameForVC:(id)a0;
- (void)popMonitorStack:(id)a0;
- (void).cxx_destruct;

@end
