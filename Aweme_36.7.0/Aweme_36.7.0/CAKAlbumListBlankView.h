@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface CAKAlbumListBlankView : UIView <CAKAlbumListBlankViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL enableAddButton;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *toSetupButton;
@property (nonatomic) long long type;
@property (nonatomic) long long themeType;
@property (copy, nonatomic) id /* block */ clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithType:(long long)a0;
- (void)clickToSetupButton;
- (void)updateIconImageInDarkMode;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
