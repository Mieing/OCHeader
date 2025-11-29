@class UILabel, UIImageView, UIView;
@protocol AWEIMListExpandingFooterViewProtocol;

@interface AWEIMListExpandingFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *transparentBackgroundView;
@property (retain, nonatomic) UILabel *expandingTextLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (weak, nonatomic) id<AWEIMListExpandingFooterViewProtocol> delegate;

+ (id)identifier;

- (void)__setupUI;
- (void)configWithExpandingStatus:(BOOL)a0;
- (void)__didTapOnMaskView;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
