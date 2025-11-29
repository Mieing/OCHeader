@class UIImageView, UILabel, UIView, AWEDeliveryChatTopInfoModel;
@protocol AWEDeliveryBannerViewDelegate;

@interface AWEDeliveryBannerView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *detailInfoLabel;
@property (retain, nonatomic) UILabel *disclosureLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) AWEDeliveryChatTopInfoModel *item;
@property (weak, nonatomic) id<AWEDeliveryBannerViewDelegate> delegate;

+ (double)height;

- (void)refreshWithItem:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction:(id)a0;

@end
