@class WCPayWebImageView, WCRedEnvelopesReceiveHomePromotionViewModel, UIImageView, UILabel;
@protocol WCRedEnvelopesReceiveHomePromotionViewDelegate;

@interface WCRedEnvelopesReceiveHomePromotionView : MMUIView

@property (retain, nonatomic) WCPayWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCRedEnvelopesReceiveHomePromotionViewModel *viewModel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCRedEnvelopesReceiveHomePromotionViewDelegate> m_delegate;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapPromotionView:(id)a0;
- (void)onLongPressPromotionView:(id)a0;
- (void).cxx_destruct;

@end
