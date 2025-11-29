@class UILabel, UIButton, UIStackView, NSMutableArray, BDSCResearchCardViewModel, BDSCImageView, UIView;

@interface BDSCResearchCardView : UIView

@property (retain, nonatomic) BDSCResearchCardViewModel *viewModel;
@property (retain, nonatomic) UIView *cardContainer;
@property (retain, nonatomic) UIView *researchContainer;
@property (retain, nonatomic) UIView *solutionContainer;
@property (retain, nonatomic) BDSCImageView *cardBackgroundView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *yesButton;
@property (retain, nonatomic) UIButton *noButton;
@property (retain, nonatomic) UIButton *unknownButton;
@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) UILabel *solutionLabel;
@property (retain, nonatomic) BDSCImageView *solutionIconView;
@property (retain, nonatomic) BDSCImageView *solutionBackgroundIconView;
@property (retain, nonatomic) NSMutableArray *tipViewArray;

- (void)updateCurrentQuestion;
- (void)updateSolutionLayout;
- (void)updateResearchLayout;
- (void)doNextQuestion;
- (void)didClickYES;
- (void)didClickNO;
- (void)didClickUnknown;
- (void)didClickSkip;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
