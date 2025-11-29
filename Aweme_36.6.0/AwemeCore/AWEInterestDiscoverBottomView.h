@class NSString, UIImageView, UILabel, UIView;

@interface AWEInterestDiscoverBottomView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *roamImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ bottomBarClickAction;
@property (copy, nonatomic) NSString *interestID;
@property (copy, nonatomic) NSString *interestName;

- (double)containerTopMargin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 interestID:(id)a1 interestName:(id)a2;
- (double)containerLeftAndRightMargin;
- (void)clickContainer;
- (void).cxx_destruct;
- (id)iconImage;
- (id)titleLabelFont;
- (void)setupUI;
- (double)containerHeight;

@end
