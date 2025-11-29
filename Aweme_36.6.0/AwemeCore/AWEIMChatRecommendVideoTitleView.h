@class UILabel, UIImageView;

@interface AWEIMChatRecommendVideoTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *reloadView;
@property (retain, nonatomic) UILabel *disableReloadLabel;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ didTapReloadBlock;

- (void)p_reloadViewDidTapped:(id)a0;
- (void)p_setupDisplayTypeTwoColumns;
- (void)p_setupDisplayTypeSlideHorizontally;
- (void)stopReloadAnimation;
- (void)configWithStyle:(unsigned long long)a0;
- (void)disableReload;
- (void)hideReloadView;
- (void)startReloadAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;

@end
