@class UIImageView, UILabel;

@interface AWEIMChatDetailEmptyView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)addSubviews;
- (void)setupWithTitle:(id)a0 content:(id)a1;
- (void)updateIconView:(id)a0 size:(double)a1;
- (void)initSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)setupLayout;

@end
