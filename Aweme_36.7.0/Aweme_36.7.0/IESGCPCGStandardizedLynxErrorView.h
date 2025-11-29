@class UIImageView, UILabel, UIView, UIButton;
@protocol IESGCPCGStandardizedLynxErrorViewDelegate;

@interface IESGCPCGStandardizedLynxErrorView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<IESGCPCGStandardizedLynxErrorViewDelegate> delegate;

- (void)onCloseButtonClicked:(id)a0;
- (void)onRetryButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
