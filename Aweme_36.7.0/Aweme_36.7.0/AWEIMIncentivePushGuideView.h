@class UILabel, IESIMButton;

@interface AWEIMIncentivePushGuideView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESIMButton *confirmButton;
@property (retain, nonatomic) IESIMButton *closeButton;
@property (copy, nonatomic) id /* block */ didClickConfirmBtnBlock;
@property (copy, nonatomic) id /* block */ didClickCloseBtnBlock;

- (void)didTapConfirmButton:(id)a0;
- (void)setupUIWithConfig:(id)a0;
- (void)updateWithChatHasBackground:(BOOL)a0;
- (void)addBannerSubviews;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)didTapCloseButton:(id)a0;

@end
