@class MMBadgeView, MainFrameCellData, MMHeadImageView, NSString, UIImageView, TextStateItemView, MMCPLabel, VoicePlayingView, MainFrameItemGreenLabel, MMGroupView, UILabel;

@interface MainFrameItemView : UIView <MMLiveMgrExt, WCTextStateDBExt, MsgPlayingFacadeExt> {
    MMCPLabel *m_descPostfix;
    UIImageView *m_namePostIconView;
    TextStateItemView *m_textStateView;
    UIImageView *m_chatNotPushView;
    UIImageView *m_trackRoomTipsView;
    UIImageView *m_multiTalkIconView;
    UIImageView *m_multiTalkingView;
    UIImageView *m_starView;
    UIImageView *m_strongNotifactionIconView;
    UIImageView *m_groupLiveIconView;
    MMGroupView *m_groupView;
    VoicePlayingView *m_msgPlayingIconView;
}

@property (retain, nonatomic) MMHeadImageView *m_frameHeadView;
@property (retain, nonatomic) MMBadgeView *m_unreadCountView;
@property (retain, nonatomic) UILabel *m_timeLabel;
@property (retain, nonatomic) MainFrameItemGreenLabel *m_greenLabel;
@property (retain, nonatomic) MMCPLabel *m_messageLabel;
@property (retain, nonatomic) MMCPLabel *m_nameLabel;
@property (retain, nonatomic) MainFrameCellData *m_cellData;
@property (retain, nonatomic) UIImageView *m_statusView;
@property (retain, nonatomic) UIImageView *m_liveStatusView;
@property (nonatomic) BOOL ignoreDraftMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCellData:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initNameLabel;
- (void)initDescLabel;
- (void)initNamePostIconView;
- (void)initGroupView;
- (void)initTextStateView;
- (void)initSubview;
- (void)layoutSubviews;
- (void)updateTimeForTimer;
- (void)updateTimeLabel;
- (id)getLabelNameColor;
- (void)updateNameLabel;
- (void)updateGroupView:(BOOL)a0;
- (BOOL)shouldHideGroupLiveIcon:(BOOL)a0;
- (void)quoteMessageLable:(id)a0 prefixText:(id)a1;
- (void)removeQuoteMessageLabel;
- (void)updateNoneVoiceGreenLabelAndMsgLabel;
- (void)updateMessageLabel;
- (void)updateMessageForChatRoom;
- (void)updateMessageForSingle;
- (id)attrDigestForSessionInfo:(id)a0;
- (id)highlightPatDigestForSessionInfo:(id)a0;
- (void)updateMessageForBrandHolder;
- (void)updateMessageForBrandServiceHolderWithStrX:(double)a0;
- (void)updateStarView;
- (void)updateLiveStatusView;
- (void)updateTextStateView;
- (void)quoteMessageLable:(id)a0 prefixText:(id)a1 hasStar:(BOOL)a2 hasLiveStatus:(BOOL)a3 prefixColor:(id)a4;
- (void)updateHeadView;
- (void)updateUnreadCountView;
- (BOOL)isShowPluginStatus;
- (void)updateStatusView;
- (void)updateBackgroundColor;
- (void)updateWithCellData:(id)a0;
- (void)setLabelHighlighted:(BOOL)a0;
- (void)onLiveCountChanged:(id)a0;
- (void)onTextStateRead:(id)a0 username:(id)a1;
- (void)onBeginPlayingMsg:(id)a0 autoPlayEnabled:(BOOL)a1;
- (void)onEndPlayingMsg:(id)a0 autoPlayEnabled:(BOOL)a1;
- (void)onAutoPlayEndWithMsg:(id)a0;
- (void).cxx_destruct;

@end
