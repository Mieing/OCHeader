@class MMTimer, NSString, WCAdHalfScreenContainerBaseView, WCAdvertiseInfo, WCAdQuicklyAddBrandInfo;
@protocol WCAdQuicklyAddBrandLogicDelegate;

@interface WCAdQuicklyAddBrandLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenContainerViewDelegate, PBMessageObserverDelegate>

@property (retain, nonatomic) WCAdQuicklyAddBrandInfo *brandInfo;
@property (retain, nonatomic) WCAdHalfScreenContainerBaseView *adBrandHalfScreenView;
@property (retain, nonatomic) MMTimer *contactSyncTimer;
@property (nonatomic) int uiScene;
@property (nonatomic) int uiSubScene;
@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (copy, nonatomic) NSString *snsId;
@property (copy, nonatomic) NSString *canvasDynamicInfo;
@property (weak, nonatomic) id<WCAdQuicklyAddBrandLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBrandInfo:(id)a0 uiScene:(int)a1 enterType:(unsigned long long)a2 adInfo:(id)a3 snsId:(id)a4 canvasDynamicInfo:(id)a5;
- (void)start;
- (void)dealloc;
- (void)onConfirmButtonClick;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onModifyContact:(id)a0;
- (void)scheduleContactSyncTimer;
- (BOOL)checkValid:(id)a0;
- (void)callbackResult:(long long)a0;
- (void)callbackResultSuccess;
- (void)callbackResultFailed;
- (void)addBrandInner:(id)a0;
- (void)enterBrandInner;
- (void)createVerify:(id)a0 andSubScene:(unsigned int)a1;
- (void)invalidateContactSyncTimer;
- (void)onTimeoutContactSync;
- (void)showLoadingView;
- (id)fetchMMViewController;
- (void).cxx_destruct;

@end
