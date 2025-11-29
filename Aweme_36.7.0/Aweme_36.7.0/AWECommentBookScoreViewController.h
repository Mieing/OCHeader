@class UIStackView, UIButton, AWECommentBookStarView, UILabel, DUXCheckBox;
@protocol AWECommentBookScoreDelegate;

@interface AWECommentBookScoreViewController : UIViewController

@property (retain, nonatomic) AWECommentBookStarView *starView;
@property (retain, nonatomic) UIStackView *checkBoxStackView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) UILabel *bookTitleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *extraBookTitleLabel;
@property (weak, nonatomic) id<AWECommentBookScoreDelegate> delegate;
@property (nonatomic) BOOL hasUpdateComment;

- (float)getBookScore;
- (void)closeButtonClicked;
- (BOOL)getCheckBoxState;
- (void)setSingelLottieSource:(id)a0 finalLottieSource:(id)a1;
- (void)setBookTitle:(id)a0 isUpdate:(BOOL)a1;
- (void)setBookRating:(float)a0;
- (void)initView;
- (void)setUICorner;
- (void)setUpExtraUI;
- (void).cxx_destruct;
- (id)initWithParams:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
