@class NSArray, UIStackView;

@interface AFDVisitorListUnAuthorizedHintView : UIView

@property (copy, nonatomic) NSArray *words;
@property (retain, nonatomic) UIStackView *contentStackView;

- (void)setupDotHintLabelViews;
- (void)setupContentStackView;
- (void)setupDotHintLabelViewWithWord:(id)a0;
- (id)initWithHintWords:(id)a0;
- (void).cxx_destruct;

@end
