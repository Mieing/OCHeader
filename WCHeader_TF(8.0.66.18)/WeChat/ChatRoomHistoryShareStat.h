@class NSString;

@interface ChatRoomHistoryShareStat : NSObject {
    NSString *_nsClassifiedMsgStat;
    unsigned int _uiFinalShareCnt;
    unsigned int _uFinalShareCountSecondForward;
}

@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *nsAddMemberStat;
@property (nonatomic) unsigned int uiInvitedCnt;
@property (nonatomic) BOOL isRoomNewlyCreated;
@property (nonatomic) BOOL isUpgradeOpenIMGroup;
@property (nonatomic) BOOL hasExposedShareEntry;
@property (nonatomic) BOOL hasClickedShareEntry;
@property (nonatomic) unsigned int clickClearCnt;
@property (nonatomic) unsigned int exceedAlertCnt;
@property (nonatomic) unsigned int exceedSizeAlertCnt;
@property (nonatomic) unsigned long long uploadStartMs;
@property (nonatomic) unsigned long long uploadEndMs;
@property (nonatomic) unsigned long long sharedContentSize;
@property (nonatomic) unsigned int sharedLastFileSize;
@property (nonatomic) unsigned long long abandonUploadContentSize;
@property (nonatomic) unsigned int abandonUploadCount;
@property (nonatomic) unsigned int uploadManualRetryCount;
@property (nonatomic) unsigned int initSelectCnt;
@property (nonatomic) unsigned int autoSelectCnt;
@property (nonatomic) unsigned int autoDisSelectCnt;
@property (nonatomic) unsigned int manuSelectCnt;
@property (nonatomic) unsigned int manuDisSelectCnt;
@property (nonatomic) unsigned int uploadFailCnt;
@property (nonatomic) unsigned int waitUploadAlertCnt;
@property (nonatomic) unsigned int uploadFailAlertCnt;

- (void)statSelectedMsgs:(id)a0;
- (void)statAddedMemberList:(id)a0;
- (void)abandonLastUpload;
- (id)getUsrnameStatFromMemberList:(id)a0;
- (unsigned int)getUploadTimeMs;
- (id)commonBuildStat:(int)a0;
- (id)commonBuildStat:(int)a0 addMemberErrCode:(unsigned int)a1;
- (void)cancelShareReport;
- (void)successReport:(int)a0;
- (void)failReport:(unsigned int)a0;
- (void)internalKVStat:(id)a0;
- (void).cxx_destruct;

@end
