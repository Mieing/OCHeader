@class RACDisposable, IESLiveRevenueInteractFeedbackViewModel, IssueCategory, UILabel, IESLiveRevenueInteractFeedbackStyleConfig, RACCompoundDisposable;

@interface IESLiveRevenueInteractFeedbackIssueCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *issueLabel;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) RACDisposable *multiSelectedDisposable;
@property (weak, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackStyleConfig *styleConfig;
@property (retain, nonatomic) IssueCategory *category;

- (void)updateUIWithSelected:(BOOL)a0;
- (void)p_dispose;
- (void)updateUIWithIssue:(id)a0 viewModel:(id)a1 type:(long long)a2 styleConfig:(id)a3;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutUI;

@end
