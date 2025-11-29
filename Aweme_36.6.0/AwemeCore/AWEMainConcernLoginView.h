@class NSString, UIImageView, UILabel, UIButton;

@interface AWEMainConcernLoginView : UIView <AWEMainLoginViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) UIButton *loginButton;
@property (copy, nonatomic) id /* block */ loginBtnClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceCommonAdaperClass;

- (id)aAWEFeedModuleServiceCommonAdaper;
- (void)updateSubTipLabelToFamiliarFeed;
- (void)setupSubviewsPositionWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)concernLoginImage;
- (id)concernLoginTipLabel;
- (id)concernLoginSubTipLabel;
- (id)concernLoginButton;
- (void)loginBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
