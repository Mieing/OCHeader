@class WCFinderJumpInfoParams, WCAdFinderDialogBaseInfo, WCAdvertiseInfo;

@interface WCAdFinderDialogClickManager : NSObject

@property (retain, nonatomic) WCAdFinderDialogBaseInfo *dialogInfo;
@property (retain, nonatomic) WCFinderJumpInfoParams *jumpParams;
@property (retain, nonatomic) WCAdvertiseInfo *advertiseInfo;
@property (nonatomic) BOOL directToAppUserConfirm;
@property (nonatomic) int directToAppReportScene;

- (id)initWithDialogInfo:(id)a0 jumpParams:(id)a1;
- (void)commitDialogConfirmEvents;
- (void)doDirectToAppEventWithInfo:(id)a0;
- (void)launchAppByDeeplink:(id)a0;
- (void)handleLaunchAppResultWithAppInfo:(id)a0 bIsCancel:(BOOL)a1 bIsLaunchSuccess:(BOOL)a2;
- (void)doDoubleLinkJumpEventWithInfo:(id)a0 jumpParams:(id)a1;
- (void)doJumpStoreEventWithInfo:(id)a0;
- (void)doConversionShowUpReport;
- (int)deeplinkType;
- (void)reportConversionOnlineForLaunchApp:(int)a0 deeplinkType:(int)a1;
- (void)doDirectToAppDialogClickReport;
- (void)reportDirectToAppDialogClickWithReportScene:(int)a0 isForShowDialog:(BOOL)a1;
- (BOOL)isDialogTypeDirectToApp;
- (void).cxx_destruct;

@end
