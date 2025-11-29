@class NSString, UIImageView, CJPayButton, UIView, UILabel;
@protocol CJPayNavigationBarDelegate;

@interface CJPayNavigationBarView : UIView <CJPayNavigationBarViewProtocol>

@property (retain, nonatomic) UIView *statusSpaceView;
@property (retain, nonatomic) UIView *navibarView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) CJPayButton *backBtn;
@property (retain, nonatomic) CJPayButton *shareBtn;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) BOOL isCloseBackImage;
@property (weak, nonatomic) id<CJPayNavigationBarDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBottomLine;
- (void)removeStatusBarPlaceView;
- (void)p_setupConstrants;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)share;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLeftImage:(id)a0;
- (void)setTitleImage:(id)a0;
- (void)back;

@end
