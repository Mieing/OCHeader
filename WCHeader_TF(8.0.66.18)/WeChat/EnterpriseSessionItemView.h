@class UILabel, EnterpriseSessionCellLayoutParam, EnterpriseSessionCellData, MMBadgeView, UIView, UIImageView, MMHeadImageView;

@interface EnterpriseSessionItemView : MMMultiMenuTableViewCell {
    EnterpriseSessionCellData *_cellData;
    EnterpriseSessionCellLayoutParam *_layoutParam;
    UIView *_backgroudView;
    MMHeadImageView *_headView;
    MMBadgeView *_msgCountView;
    UIImageView *_statusView;
    UILabel *_nicknameLabel;
    UILabel *_msgLabel;
    UILabel *_alertLabel;
    UILabel *_timeLabel;
    UIImageView *_chatNotPushView;
    BOOL bAlertToRight;
    BOOL _isSubscribeBrandContact;
}

+ (double)cellHeight;

- (id)initWithReuseIdentifier:(id)a0;
- (void)initSubView;
- (void)layoutSubviews;
- (void)updateWithSessionCellData:(id)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)setHeadCategory:(unsigned char)a0;
- (double)rightBoundOfStatusImage;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (void)updateHeadViewWithSessionCellData:(id)a0;
- (void)updateTimeLabelWithSessionCellData:(id)a0;
- (void)updateNameLabelWithSessionCellData:(id)a0;
- (void)updateUnReadCountWithSessionCellData:(id)a0;
- (void)updateStatusWithSessionCellData:(id)a0;
- (void)updateAlertLabelWithSessionCellData:(id)a0;
- (void)updateMsgLabelWithSessionCellData:(id)a0;
- (void)updateMoreMenuWithSessionCellData:(id)a0;
- (void)updateChatNotPushWithSessionCellData:(id)a0;
- (void)updateBackgroundColorWithSessionCellData:(id)a0;
- (id)cellSessionDataLastMsg:(id)a0;
- (void)onUpdateCellWithCellData:(id)a0;
- (void).cxx_destruct;

@end
