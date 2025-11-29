@class UIImageView, UILabel, UIView, UIButton;

@interface AWENewPublishAnchorDetailView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *anchorIconView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ deleteDidClickBlock;

- (void)deleteDidClicked:(id)a0;
- (void)updateTagLabel:(id)a0;
- (void)setupUserInteractionEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateAccessibilityLabel;

@end
