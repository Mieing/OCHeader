@class MMTimer;

@interface LiteAppJsApiAdFollowBrandUser : LiteAppJsApiAdBase <PBMessageObserverDelegate, IContactMgrExt>

@property (retain, nonatomic) MMTimer *brandContactSyncTimer;
@property (nonatomic) int brandUIScene;
@property (nonatomic) int brandUISubScene;

- (id)init;
- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)doBrandFollow:(id)a0;
- (void)createVerify:(id)a0 andSubScene:(unsigned int)a1;
- (void)invalidateBrandContactSyncTimer;
- (void)onTimeoutBrandContactSync;
- (void)onModifyContact:(id)a0;
- (void)scheduleBrandContactSyncTimer;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onBrandFollowFinish:(BOOL)a0;
- (void).cxx_destruct;

@end
