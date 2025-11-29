@class WCDataItem, NSString, ForwardMessageLogicController, CContact, EmotionBannerSet;
@protocol StoreEmotionPageShareLogicDelegate;

@interface StoreEmotionPageShareLogic : MMObject <WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSString *m_titleForShareToTimeline;
    NSString *m_titleForShareToFriend;
    NSString *m_desc;
    NSString *m_iconUrl;
    NSString *m_linkUrl;
    unsigned long long m_thirdPartyLinkID;
    unsigned long long m_thirdPartyLinkStatus;
    NSString *m_thirdPartyLinkReportInfo;
    long long m_shareToTimelineType;
    long long m_shareToFriendType;
    NSString *m_pid;
    unsigned int m_packType;
    unsigned int m_designerUin;
    NSString *m_designerName;
    EmotionBannerSet *m_bannerSet;
    CContact *m_shareContact;
}

@property (weak, nonatomic) id<StoreEmotionPageShareLogicDelegate> delegate;
@property (retain, nonatomic) WCDataItem *timeLineDataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genProductIdFromTimelineUserData:(id)a0;

- (id)init;
- (id)initWithStoreItem:(id)a0;
- (id)initWithPersonalDesigner:(id)a0 Desc:(id)a1 OldRedirectUrl:(id)a2;
- (id)initWithBannerSet:(id)a0;
- (void)showActionSheetWithSender:(id)a0;
- (void)shareToTimeline;
- (id)genUploadTask;
- (id)genTimelineUserData;
- (void)shareToFriend;
- (id)genShareFriendMessage;
- (void)showLoadingWithMsg:(id)a0;
- (void)ReportShareAction:(unsigned long long)a0 Pid:(id)a1 thirdPartyLinkID:(unsigned long long)a2 thirdPartyLinkStatus:(unsigned long long)a3 thirdPartyLinkReportInfo:(id)a4;
- (void)ReportShareAction:(unsigned long long)a0 DesignerUin:(unsigned int)a1;
- (void)ReportShareAction:(unsigned long long)a0 BannerSet:(id)a1 Type:(unsigned long long)a2;
- (void)ReportShareAction:(unsigned long long)a0 Type:(unsigned long long)a1 Pid:(id)a2 SetCellID:(unsigned long long)a3 SetName:(id)a4 thirdPartyLinkID:(unsigned long long)a5 thirdPartyLinkStatus:(unsigned long long)a6 thirdPartyLinkReportInfo:(id)a7;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void).cxx_destruct;

@end
