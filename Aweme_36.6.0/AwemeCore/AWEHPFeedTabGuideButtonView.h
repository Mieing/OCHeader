@class NSString, AWEHPFeedTabGuideButtonViewConfig, UIView, DUXBaseLabel;
@protocol AWEPlayInteractionBottomButtonViewDelegateProtocol;

@interface AWEHPFeedTabGuideButtonView : UIView <AWEPlayInteractionBottomButtonViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXBaseLabel *descriptionLabel;
@property (retain, nonatomic) DUXBaseLabel *actionLabel;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) AWEHPFeedTabGuideButtonViewConfig *config;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickJumpGuideButton;
- (id)p_getLabelFont;
- (double)minActionLabelWidth;
- (void)p_setupButtonStyle;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
