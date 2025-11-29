@class NSMutableArray, NSRecursiveLock;

@interface ContactProfileRecommendLogic : MMObject <IDownloadImageExt> {
    struct XSummary { struct Impl *mpImpl; } m_profileRecommendSummary;
    BOOL m_profileRecommendSummaryInitSuccess;
    NSRecursiveLock *m_lock;
    NSMutableArray *arrRecordDownloadImage;
    NSMutableArray *m_arrNotDownloadImageMsg;
}

@property (retain, nonatomic) NSRecursiveLock *dataLock;

+ (BOOL)startDownloadProfileRecommendImageForce:(id)a0 firstImageMsgLocalId:(unsigned int)a1;
+ (id)genProfileRecommendInfoFromoMesWrap:(id)a0;
+ (BOOL)checkIsRecommendSystemMsg:(id)a0;
+ (void)reportExposureProfileRecommendSystemWithContact:(id)a0 messageWrap:(id)a1;
+ (void)fileReportProfileRecommendCandidateSourceSystemWithProfileRecommendInfo:(id)a0 dicReportParams:(id)a1;

- (id)init;
- (void)InitModel;
- (BOOL)checkModelFilesExist;
- (BOOL)checkContactRemarkSummaryInitSuccess;
- (void)dealloc;
- (id)getContactProfileRemarkRecommend:(id)a0 isChatScene:(BOOL)a1;
- (id)getFriendProfileRecommendInputInfo:(id)a0 firstImageMessageLocalId:(unsigned int *)a1 arrAnalyzeMsgLocalId:(id)a2 setHelloToChatMsgLocalId:(id)a3;
- (id)genProfileRecommendInputItemInfoWithmessageID:(unsigned int)a0 nsContent:(id)a1 role:(id)a2;
- (id)getFriendProfileRecommendInputInfoInHello:(id)a0;
- (void)removeProfileRecommendInfoEnxposureInfo:(id)a0 recommendInfo:(id)a1 recommEnxposureItem:(id)a2;
- (void)removeProfileRecommendInfoIntrinsicInfo:(id)a0 recommendInfo:(id)a1;
- (void)startDownloadProfileRecommendImage:(id)a0 firstImageMsgLocalId:(unsigned int)a1;
- (BOOL)checkRecommendImageHadSetCardImage:(id)a0 imageMsgLocalId:(unsigned int)a1 cardImgList:(id)a2;
- (void)insertIntoSystemMssageWithContact:(id)a0 profileRecommendInfo:(id)a1;
- (id)getProfileRecommendSystemMsgWrapSourceContent:(id)a0;
- (unsigned int)getProfileRecommendSystemMsgMsgCreateWithContact:(id)a0 profileRecommendInfo:(id)a1;
- (id)getProfileRecommendSystemMsgWrapContent:(id)a0;
- (id)getSystemMssageRemarkAndPhoneTitle:(id)a0;
- (id)getProfileRecommendPhoneFromResults:(void *)a0 arrPhoneMsgId:(id)a1 dicPhoneMsgId:(id)a2;
- (id)getProfileRecommendRemarksFromResults:(void *)a0 arrRemarkMsgId:(id)a1 isChatScene:(BOOL)a2 dicRemarkType:(id)a3 dicRemarkMsgId:(id)a4;
- (BOOL)checkISNeedToUpdateSystemMessage:(id)a0 recommendInfo:(id)a1 systemRecommendInfo:(id)a2;
- (void)fillUpProfileRecommendInfo:(id)a0;
- (void)showEditRemarkNameInRecommendSystemMsgWithContact:(id)a0 messageWrap:(id)a1 viewController:(id)a2;
- (void)OnDownloadImageOk:(id)a0;
- (void)OnDownloadImageFail:(id)a0;
- (void)OnDownloadImageExpired:(id)a0;
- (void)handleFailImageDownload:(id)a0;
- (void)reportClickProfileRecommendSystemWithContact:(id)a0 profileRecommendInfo:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
