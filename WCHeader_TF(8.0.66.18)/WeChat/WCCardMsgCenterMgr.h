@class WCCardMsgTips, WCCardEntryTips, NSString, WCCardPkgDB;
@protocol WCCardMsgCenterMgrDelegate;

@interface WCCardMsgCenterMgr : MMObject <IMsgExt> {
    WCCardPkgDB *_wccardPkgDB;
    WCCardMsgTips *_wccardMsgTips;
    WCCardEntryTips *_wccardEntryTips;
    unsigned long long _lastMsgSvrId;
    unsigned long long _lastLastMsgSvrId;
    NSString *_nsLastConsumedBoxID;
}

@property (weak, nonatomic) id<WCCardMsgCenterMgrDelegate> delegate;

- (id)init;
- (void)initDB:(id)a0;
- (unsigned int)getUnreadMsgCount;
- (id)getFirstPageMsgList;
- (BOOL)addMsg:(id)a0 XML:(id)a1;
- (BOOL)setAllMsgRead;
- (BOOL)setConsumedMsgRead:(id)a0;
- (BOOL)hasEntryShowNewBySvr;
- (BOOL)hasEntryShowRedDotBySvr;
- (id)entryTipWordingBySvr;
- (id)entryTipIconUrlBySvr;
- (void)cleanEntryTipBySvr;
- (id)getRedDotBuffBySvr;
- (void)cleanRedDotBuffBySvr;
- (id)lastMsgCardIdForEntryTip;
- (BOOL)isLastMsgNeedCheckForClear;
- (BOOL)hasNewEntryNewBySvr;
- (BOOL)hasNewEntryRedDotBySvr;
- (BOOL)hasNewEntryMeRedDotBySvr;
- (id)bubbleMessageWording;
- (id)bubbleMessageIconUrl;
- (unsigned int)bubbleMessageCount;
- (void)cleanBubbleMessage;
- (void)loadCardTips;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
