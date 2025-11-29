@class UILabel, NSString, UIButton;

@interface ACCAlbumRequestAccessView : UIView <CAKAlbumRequestAccessViewProtocol>

@property (retain, nonatomic) UILabel *accessAlbumLabel;
@property (retain, nonatomic) UILabel *accessAllPhotoLabel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIButton *startSettingButton;
@property (nonatomic) long long themeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateEnterFrom:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
