@class UIStackView, UIView, NSArray, UIImage, IESECButton, UIImageView, NSMutableArray, UILabel;

@interface IESECNavigationBar : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) NSMutableArray *leftItemViews;
@property (retain, nonatomic) NSMutableArray *rightItemViews;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (nonatomic) double leftNavigationItemsSpacing;
@property (nonatomic) double leftNavigationItemsMargin;
@property (nonatomic) double rightNavigationItemsSpacing;
@property (nonatomic) double rightNavigationItemsMargin;
@property (retain, nonatomic) NSArray *leftNavigationItems;
@property (retain, nonatomic) NSArray *rightNavigationItems;
@property (retain, nonatomic) UIStackView *leftStackView;
@property (retain, nonatomic) IESECButton *customNavigationBackButton;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (nonatomic) BOOL bottomLineHidden;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
