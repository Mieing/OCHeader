@class UIButton, UIView;
@protocol SetTrustedFriendTipsViewDelegate;

@interface SetTrustedFriendTipsView : MMUIView

@property (weak, nonatomic) id<SetTrustedFriendTipsViewDelegate> m_delegate;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIButton *closeButton;

- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)dismissSystemMsg;
- (void)layoutTipsView;
- (void).cxx_destruct;

@end
