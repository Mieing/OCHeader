@class IESLiveCommentGiftViewModel, UIImageView, UILabel, IESLiveAnimatedImageView;
@protocol IESLiveGiftStructOuterProtocol, IESLiveMonitor;

@interface IESLiveCommentGiftView : UIView

@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedImageView;
@property (retain, nonatomic) UIImageView *giftIconImageView;
@property (retain, nonatomic) UIImageView *background;
@property (retain, nonatomic) id<IESLiveGiftStructOuterProtocol> gift;
@property (retain, nonatomic) IESLiveCommentGiftViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;

- (void)updateGift:(id)a0;
- (void)sendGift;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupView;

@end
