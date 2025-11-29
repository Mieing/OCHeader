@class NSString, UILabel, UIView, UIButton;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendHeaderView : UIView <AWEUserRecommendHeaderFooterViewProtocol>

@property (retain, nonatomic) UIView *topDivider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *privacyButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (nonatomic) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (id)headerFooterView;

- (void)p_clickCloseButton:(id)a0;
- (void)p_clickPrivacyButton:(id)a0;
- (void)p_setupUI;
- (void)config;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
