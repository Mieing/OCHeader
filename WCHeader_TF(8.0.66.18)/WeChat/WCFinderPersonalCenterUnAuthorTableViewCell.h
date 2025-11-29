@class UIImageView, WCFinderHeadImageView, UILabel, UIView, UnAuthFinder;

@interface WCFinderPersonalCenterUnAuthorTableViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderHeadImageView *headerView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UnAuthFinder *authInfo;

+ (id)cellID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubViews;
- (void)updateUnAuthFinder:(id)a0;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;

@end
