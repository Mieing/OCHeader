@class NSString, UIImage, MMBaseSessionInfo;

@interface MMBaseSessionCellData : NSObject {
    unsigned int m_updateTime;
    BOOL m_isMoreThanAWeek;
    BOOL _isSubscribeBrandContact;
    BOOL _isBrandServiceContact;
}

@property (readonly, retain, nonatomic) NSString *textForTimeLabel;
@property (readonly, retain, nonatomic) NSString *textForNameLabel;
@property (readonly, retain, nonatomic) NSString *textForMsgLabel;
@property (readonly, retain, nonatomic) NSString *userName;
@property (readonly, retain, nonatomic) NSString *headImgUrl;
@property (readonly, nonatomic) unsigned int unreadCount;
@property (readonly, nonatomic) unsigned int msgStatus;
@property (readonly, nonatomic) BOOL isSentFromSelf;
@property (readonly, nonatomic) BOOL isHasDraft;
@property (readonly, nonatomic) BOOL isContentOriginal;
@property (readonly, nonatomic) BOOL isChatStatusNotifyOpen;
@property (readonly, retain, nonatomic) NSString *fromBusinessNameLabel;
@property (readonly, retain, nonatomic) NSString *textForNameDescLabel;
@property (readonly, nonatomic) unsigned int sessionUpdateTime;
@property (readonly, retain, nonatomic) MMBaseSessionInfo *sessionInfo;
@property (nonatomic) int badgeUnreadMaxCount;
@property (retain, nonatomic) UIImage *headImage;
@property (retain, nonatomic) NSString *senderDisplayName;
@property (nonatomic) BOOL forceHiddenChatNotPushIcon;
@property (nonatomic) BOOL forceCloseChatStatusNotify;
@property (nonatomic) BOOL hideMsgLabelWhenMsgIsEmpty;
@property (retain, nonatomic) UIImage *namePostIconImage;
@property (copy, nonatomic) NSString *accessibilityForTimeLabel;

- (id)initWithBaseSessionInfo:(id)a0;
- (void)dealloc;
- (void)updateWithBaseSessionInfo:(id)a0;
- (void)updateNameLabelText:(id)a0;
- (void)updateTimeLabel;
- (void)updateUnreadCount;
- (void)updateMsgStatus:(id)a0;
- (void)updateMsgLabelTextForWeixinUsr:(id)a0;
- (void)forceUpdateUnreadCount:(unsigned int)a0;
- (void)updateFromBusinessNameLabelWithContact:(id)a0;
- (void)forceUpdateMsgLabelText:(id)a0;
- (id)textForMsgLabelWithSender:(id)a0 messageWrap:(id)a1;
- (void).cxx_destruct;

@end
