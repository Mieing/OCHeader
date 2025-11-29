@class UIImageView, WCFinderPersonalCenterSidesButton, UILabel, UIView;
@protocol WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate;

@interface WCFinderPersoncalCenterContactBlockCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *headerView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) WCFinderPersonalCenterSidesButton *incomeButton;
@property (nonatomic) BOOL showIncomeEntrance;
@property (weak, nonatomic) id<WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate> delegate;

+ (id)cellID;
+ (BOOL)canShowIncomeView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSeparator;
- (void)setupIcomContainerView;
- (void)setupSubViews;
- (void)resize;
- (void)prepareForReuse;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)updateWithIncomeEntrance:(BOOL)a0 infoTips:(id)a1;
- (void)clickIncomeAction;
- (void).cxx_destruct;

@end
