@class UILabel, UIImageView, UIView;
@protocol AWEIMContactListSelectAllHeaderViewProtocol;

@interface AWEIMContactListSelectAllHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL canSelect;
@property (weak, nonatomic) id<AWEIMContactListSelectAllHeaderViewProtocol> delegate;

+ (id)identifier;

- (void)changeToSelect:(BOOL)a0 canSelect:(BOOL)a1;
- (void)__didTapOnMaskView;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0;

@end
