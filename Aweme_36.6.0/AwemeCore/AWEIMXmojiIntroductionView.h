@class UIStackView, NSArray, UIImageView, NSDictionary, UILabel, UIButton;

@interface AWEIMXmojiIntroductionView : UIView

@property (retain, nonatomic) UIImageView *leftIntroIconImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) NSArray *exampleViews;
@property (copy, nonatomic) NSDictionary *context;

- (void)actionButtonClicked:(id)a0;
- (void)addSubviews;
- (void)configWithViewModel;
- (id)createActionButton;
- (id)createExampleImageView;
- (id)stackViewWithSubviews:(id)a0;
- (double)getTopInset;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)commonInit;
- (void)updateWithContext:(id)a0;
- (void)setUpConstraints;

@end
