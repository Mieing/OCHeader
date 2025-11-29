@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEMusicExceptionalViewDelegate;

@interface AWEMusicExceptionalView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *noNetImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *tryAgainButton;
@property (nonatomic) BOOL enableTheme;
@property (nonatomic) BOOL isDarkMode;
@property (nonatomic) double buttonTopOffset;
@property (weak, nonatomic) id<AWEMusicExceptionalViewDelegate> delegate;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *desc;

- (id)subTitleColor;
- (id)buttonBGColor;
- (void)installActions;
- (id)initWithEnableTheme:(BOOL)a0 isDarkMode:(BOOL)a1 buttonTopOffset:(double)a2;
- (void)resetTopOffset:(double)a0;
- (void).cxx_destruct;
- (id)titleColor;
- (void)setImage:(id)a0;
- (id)init;
- (void)setupView;
- (id)buttonTitleColor;
- (void)tryAgain;

@end
