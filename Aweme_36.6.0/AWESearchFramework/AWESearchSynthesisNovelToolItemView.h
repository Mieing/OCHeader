@class UIButton, UILabel, AWESearchSynthesisNovelToolItem;
@protocol AWESearchSynthesisNovelToolItemViewDelegate;

@interface AWESearchSynthesisNovelToolItemView : UIView

@property (weak, nonatomic) id<AWESearchSynthesisNovelToolItemViewDelegate> delegate;
@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchSynthesisNovelToolItem *item;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL dark;

- (void)updateImage:(id)a0;
- (void)configSubViews;
- (void)onBtnClick:(id)a0;
- (void)updateBadge:(long long)a0;
- (void)refreshWithEnable:(BOOL)a0 dark:(BOOL)a1;
- (id)initWithItem:(id)a0 delegate:(id)a1;
- (void)updateConfigData:(id)a0;
- (void)refreshWithDark:(BOOL)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)updateTitle:(id)a0;

@end
