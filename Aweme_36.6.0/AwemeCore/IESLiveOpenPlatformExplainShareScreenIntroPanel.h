@class NSString, UIImageView, IESLivePopupItem, UIView, UIButton;

@interface IESLiveOpenPlatformExplainShareScreenIntroPanel : NSObject

@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *introImageView;
@property (retain, nonatomic) UIImageView *singleLeftImageView;
@property (retain, nonatomic) UIImageView *singleRightImageView;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) unsigned long long introType;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) NSString *buttonText;

- (id)initWithDIContext:(id)a0;
- (void)backClicked;
- (void)setupPopupItem;
- (void)loadImageWithName:(id)a0 view:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)hide;
- (void)loadImage;
- (void)show;
- (void)setupUI;

@end
