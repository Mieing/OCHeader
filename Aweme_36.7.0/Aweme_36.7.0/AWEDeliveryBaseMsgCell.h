@class AWEDeliveryBaseMsgModel, AWEDeliveryMsgMoreItemView, UIImageView, NSString, UIView, UILabel, YYLabel;
@protocol AWEDeliveryMsgCellDelegate;

@interface AWEDeliveryBaseMsgCell : UITableViewCell <AWEDeliveryMsgMoreItemViewDelegate>

@property (retain, nonatomic) UIView *messageContentView;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIView *msgIndicatorView;
@property (retain, nonatomic) YYLabel *riskTipsLabel;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) UILabel *indicatorLabelView;
@property (retain, nonatomic) AWEDeliveryMsgMoreItemView *bottomItemView;
@property (retain, nonatomic) AWEDeliveryBaseMsgModel *cellModel;
@property (weak, nonatomic) id<AWEDeliveryMsgCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)messageTextExtraAreaMaxWidth;
+ (double)messageContentWidthForCellModel:(id)a0;
+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (double)messageContentMaxWidth;
+ (double)questionContentWidthForCellModel:(id)a0;
+ (double)contentTextRightPadding;
+ (double)contentTextLeftPadding;
+ (double)notifyContentWidth;

- (void)didCustomInit;
- (void)msgCellMoreItemViewDidClick;
- (void)checkShowBottomMoreItemView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
