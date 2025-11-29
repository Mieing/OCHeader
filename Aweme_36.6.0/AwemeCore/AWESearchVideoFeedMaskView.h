@class UILabel, NSString;

@interface AWESearchVideoFeedMaskView : UIView <AWESearchVideoFeedMaskViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *despLabel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithAwemeModel:(id)a0;

- (void)configureUI;
- (void)viewDidTap:(id)a0;
- (void)configureWithAwemeModel:(id)a0;
- (void)showInView:(id)a0 autoDismiss:(BOOL)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
