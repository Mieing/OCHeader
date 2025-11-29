@class UIImageView, UILabel, UIView, UIButton;
@protocol AWETeenSubscribeBackToFeedMaskViewDelegate;

@interface AWETeenSubscribeBackToFeedMaskView : UIView

@property (retain, nonatomic) UILabel *msgLabel;
@property (retain, nonatomic) UIButton *backToFeedButton;
@property (retain, nonatomic) UILabel *backToFeedLabel;
@property (retain, nonatomic) UIImageView *backToFeedImageView;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWETeenSubscribeBackToFeedMaskViewDelegate> delegate;

- (void)p_renderUI;
- (void)backToFeedClick:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)show;

@end
