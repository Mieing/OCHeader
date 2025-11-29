@class NSString, WCDataItem;

@interface WCMomentsFullScreenMgr : MMUserService <WCImageFullScreeViewMgrExt, WCPlayerConfigFullScreenViewControllerExt, MJTemplateFullScreenViewControllerExt, MMLiveTaskMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSString *fullScreenTid;
@property (retain, nonatomic) NSString *fullScreenMid;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExt;
- (void)unRegisterExt;
- (void)recordFullScreenDataItem:(id)a0 mid:(id)a1;
- (void)recordFullScreenTid:(id)a0 mid:(id)a1;
- (void)removeFullScreenTid:(id)a0 mid:(id)a1;
- (BOOL)isFullScreenShow:(id)a0;
- (BOOL)isFullScreenShow:(id)a0 mid:(id)a1;
- (void)reset;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
- (void)playerViewControllerCloseAnimationComplete:(id)a0;
- (void)templateFullScreenViewController:(id)a0 closeFullScreenComplete:(id)a1;
- (void)onMinimizeInteractiveWillEnd:(id)a0;
- (void)onCollapseAnimationWillStart:(id)a0;
- (void)onWillExitLiveWithLiveTask:(id)a0;
- (void)resetRecordDataIfNeededWithLiveTask:(id)a0;
- (BOOL)isCurrentDataItemOpenedLiveTask:(id)a0;
- (void).cxx_destruct;

@end
