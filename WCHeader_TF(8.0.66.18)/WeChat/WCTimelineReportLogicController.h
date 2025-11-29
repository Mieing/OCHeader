@class WCCommentReport, NSString, WCMicroMerchantReporter, WeishiReportItem;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineReportLogicController : NSObject <INewMsgNotifyExt, WCTimelineLogicControllerImplProtocol>

@property (weak, nonatomic) id<WCTimelineLogicControllerDelegate> delegate;
@property (retain, nonatomic) WeishiReportItem *weSeeSession;
@property (retain, nonatomic) WCCommentReport *commentReport;
@property (retain, nonatomic) WCMicroMerchantReporter *wsFoldReporter;
@property (retain, nonatomic) NSString *inputSessionId;
@property (nonatomic) double lastScreenShotContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)startLogBrowseInfo:(BOOL)a0;
- (void)logDataItemBrowseCount:(id)a0;
- (void)recordUserPermission:(id)a0 blackList:(BOOL)a1 outsider:(BOOL)a2;
- (void)logBrowseInfoOnTimelineReturn;
- (void)logOnShowSelfContact;
- (void)logClickNickNameToProfile:(id)a0 refDataItem:(id)a1;
- (void)logOnCommentAction:(id)a0 inputDataItem:(id)a1 refComment:(id)a2;
- (void)logOnDidCommitText:(id)a0 inputDataItem:(id)a1 refComment:(id)a2;
- (void)logOnCancelCommitText:(id)a0 inputDataItem:(id)a1 refComment:(id)a2;
- (void)logOnEmoticonCommentAction:(id)a0 inputDataItem:(id)a1 refComment:(id)a2;
- (void)logOnCancelEmoticonCommentAction:(id)a0 inputDataItem:(id)a1 refComment:(id)a2;
- (void)logOnNoMore:(BOOL)a0;
- (void)onPlayNewMsgNotify;
- (void)beginWeSeeSession:(unsigned int)a0;
- (void)endWeSeeSessionIfExist:(unsigned int)a0;
- (id)copyWeeSeeSession;
- (void)beginWeSeeEntranceClickSession:(id)a0;
- (void)reportWeSeeEntranceClickSession:(unsigned int)a0;
- (void)endWeSeeSessionOnAlertOpenWeishiEndCancel:(BOOL)a0 Success:(BOOL)a1;
- (void)endWeSeeSessionOnAlertOpenWeishiAppStoreEndCancel:(BOOL)a0 Success:(BOOL)a1;
- (void)Reset;
- (void)Register;
- (void)asyncLogUnreadMsgCount;
- (void)reportWCOpenIMTimeLineUnInterestActionWithUserName:(id)a0;
- (void)reportWCOpenIMTimeLineExposeActionWithUserName:(id)a0;
- (void)reportWCOpenIMTimeLineSetPermissionActionWithUserName:(id)a0 oldBlackList:(BOOL)a1;
- (void)reportTopicTagInputMenuItemAction:(long long)a0 inputDataItem:(id)a1 refComment:(id)a2;
- (void)generateInputSessionID;
- (void)recordMicroMerchantFoldItemGenerate:(id)a0 index:(unsigned int)a1;
- (void)updateMicroMerchantExposureClickedForFeed:(id)a0 wsGroup:(id)a1;
- (void)endRecordBrowseMicroMerchantSession;
- (void)recordExposureFeedIDInBrowseMicroMerchantFold:(id)a0;
- (void)startWsFoldExposureSession;
- (void)recordOnClickUnfoldTimelineButton;
- (void)recordOnComfirmUnfoldTimeline;
- (void).cxx_destruct;

@end
