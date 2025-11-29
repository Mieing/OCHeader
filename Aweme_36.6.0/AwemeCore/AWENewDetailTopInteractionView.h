@class AWERVNewDetailAuthorInfoView, AWERVNewDetailPageContext, NSString, AWEAwemeModel, AWEGradientView, UIView, UIButton;

@interface AWENewDetailTopInteractionView : UIView <AWEUserMessage>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWERVNewDetailAuthorInfoView *authorInfoView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERVNewDetailPageContext *context;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)backBtnClick;
- (void)configWithAwemeModel:(id)a0;
- (void)updateElementInteractionEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
