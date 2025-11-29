@class SessionCellLayoutParam, NSString, MMBadgeView, UIView, MMHeadImageView, UIImageView, MMCPLabel, UILabel, MMBaseSessionCellData;
@protocol MMBaseSessionCellDelegate;

@interface MMBaseSessionTableViewCell : MMMultiMenuTableViewCell <IBaseSessionCellExt> {
    UILabel *m_msgLabel;
    MMBaseSessionCellData *m_cellData;
    SessionCellLayoutParam *m_layoutParam;
    UIView *m_backgroudView;
    MMHeadImageView *m_headView;
    MMBadgeView *m_msgCountView;
    UIImageView *m_statusView;
    UIImageView *m_originalIconView;
    UILabel *m_nicknameLabel;
    UIView *m_nicknameTailView;
    UILabel *m_alertLabel;
    UILabel *m_timeLabel;
    UIImageView *m_chatNotPushView;
    UIImageView *m_blockMessageView;
    UILabel *m_fromBusinessLabel;
    MMCPLabel *m_descPostfix;
    UIImageView *m_starView;
    UIImageView *m_namePostIconView;
    struct CGSize { double width; double height; } _blockMessageIconSize;
    BOOL _isSubscribeBrandContact;
    BOOL _isBrandServiceContact;
}

@property (weak, nonatomic) id<MMBaseSessionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForLayoutParam:(id)a0;

- (id)initWithLayoutParam:(id)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)updateWithSessionCellData:(id)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)setHeadCategory:(unsigned char)a0;
- (void)useRoundHeadImage;
- (void)useRoundCornorHeadImage;
- (void)resetNormalHeadImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateHeadViewWithSessionCellData:(id)a0;
- (void)updateTimeLabelWithSessionCellData:(id)a0;
- (void)updateNameLabelWithSessionCellData:(id)a0;
- (void)updateNamePostIconViewWithSessionCellData:(id)a0;
- (void)updateUnReadCountWithSessionCellData:(id)a0;
- (void)updateAlertLabelWithSessionCellData:(id)a0;
- (void)updateStatusWithSessionCellData:(id)a0;
- (void)updateOriginalIconWithSessionCellData:(id)a0;
- (void)updateMsgLabelWithSessionCellData:(id)a0;
- (void)updateChatNotPushWithSessionCellData:(id)a0;
- (void)updateBlockMessageWithSessionCellData:(id)a0;
- (void)updateFromBusinessLabelWithSessionCellData:(id)a0;
- (void)updateStarMarkWithSessionCellData:(id)a0;
- (double)rightBoundOfStatusImage;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (void)initSubView;
- (void)onMenuTransitionToConfirmState:(long long)a0;
- (void)onMultiMenuAppear;
- (void)onUpdateCellWithCellData:(id)a0;
- (id)accessibilityLabel;
- (id)GetNickNameTailView;
- (void).cxx_destruct;

@end
