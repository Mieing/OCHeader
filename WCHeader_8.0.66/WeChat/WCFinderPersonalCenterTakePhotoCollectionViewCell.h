@class UIImageView, UILabel, UIView, MMUIButton;
@protocol WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate;

@interface WCFinderPersonalCenterTakePhotoCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *redDotLabel;
@property (retain, nonatomic) UIView *postContainer;
@property (retain, nonatomic) MMUIButton *arrowBtn;
@property (retain, nonatomic) MMUIButton *incomeContainer;
@property (retain, nonatomic) UILabel *incomeLabel;
@property (nonatomic) BOOL canShowIncomeContainer;
@property (retain, nonatomic) UIView *incomeRedDot;
@property (weak, nonatomic) id<WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate> delegate;

+ (id)cellID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupReport:(id)a0;
- (void)setupContainers;
- (void)setupIcomContainerView;
- (void)setupPostViews;
- (void)updateRedPointHiddedState:(BOOL)a0;
- (void)updateCanShowIncome:(BOOL)a0;
- (void)showIncomeRedDot:(BOOL)a0;
- (void)updateDisplayElements;
- (void)updateLayoutWithViewArray:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)tapGesture:(id)a0;
- (void)onTapRedPacketEventView;
- (void)clickIncomeAction;
- (void).cxx_destruct;

@end
