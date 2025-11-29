@class UIButton, UILabel, NSString;

@interface WCFinderDescShowRecommendTipsView : UIView <WCFinderPersonalizedSettingExt>

@property (weak, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) UIButton *continueView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setUpUI;
- (void)clickButtonAction;
- (void)hideContinueView;
- (void)updateWithContentVM:(id)a0;
- (id)titleLabelTextWithContentVM:(id)a0;
- (void)resetActionButton;
- (void)wechatPersonalizedChangeType:(long long)a0 value:(BOOL)a1;
- (void).cxx_destruct;

@end
