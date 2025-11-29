@class NSString, UIImageView, AWEIMPopupRedPacketAdditionalRewardTipsView, UILabel, AWEIMPopupRedPacketReceiverData;

@interface AWEPopupRedPacketClaimListTableViewCell : UITableViewCell <AWEIMPopupRedPacketRefreshResultPageMessage>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *receiverName;
@property (retain, nonatomic) UILabel *receiveTime;
@property (retain, nonatomic) UILabel *receiveAmount;
@property (retain, nonatomic) UIImageView *bestLuckIconView;
@property (retain, nonatomic) UILabel *bestLuckLabel;
@property (retain, nonatomic) AWEIMPopupRedPacketAdditionalRewardTipsView *additionalRewardTipsView;
@property (retain, nonatomic) UILabel *unReceiveTipsLabel;
@property (retain, nonatomic) AWEIMPopupRedPacketReceiverData *receiverData;
@property (copy, nonatomic) id /* block */ avatarClickCompletion;
@property (copy, nonatomic) id /* block */ jumpToReceiveAdditionalRewardCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shouldTryToUpdateResultPageDataLater;
- (void)configCellData:(id)a0;
- (void)openUserProfile;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)reset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateUI;

@end
