@class UIImageView, UILabel, UIView, AWEIMPopupRedPacketAdditionalRewardData;
@protocol AWEIMPopupRedPacketRefreshResultPageMessage;

@interface AWEIMPopupRedPacketAdditionalRewardTipsView : UIView

@property (retain, nonatomic) UILabel *additionalRewardTipsLabel;
@property (retain, nonatomic) UIView *remindReceiveView;
@property (retain, nonatomic) UILabel *remindReceiveLabel;
@property (retain, nonatomic) UIImageView *entranceArrowImageView;
@property (retain, nonatomic) AWEIMPopupRedPacketAdditionalRewardData *additionalRewardData;
@property (weak, nonatomic) id<AWEIMPopupRedPacketRefreshResultPageMessage> delegate;

- (void)jumpToReceiveAdditionalReward;
- (void)configAdditionalRewardData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
