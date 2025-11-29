@class UILabel, MMUIButton, UIView;
@protocol FTSFirstTitleCellDelegate;

@interface FTSFirstTitleCell : MMTableViewCell

@property (nonatomic) BOOL showRightButton;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<FTSFirstTitleCellDelegate> m_delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateTitle:(id)a0;
- (void)updateTitle:(id)a0 rightButtonTitle:(id)a1;
- (void)layoutSubviews;
- (void)onRightButtonTapped;
- (id)getTopLine;
- (void).cxx_destruct;

@end
