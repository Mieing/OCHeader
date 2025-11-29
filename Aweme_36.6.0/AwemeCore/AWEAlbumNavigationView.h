@class NSString, UILabel, CAKAlbumSelectAlbumButton, UIButton;
@protocol CAKAlbumNavigationViewDelegate;

@interface AWEAlbumNavigationView : UIView <CAKAlbumNavigationViewProtocol>

@property (nonatomic) long long themeType;
@property (weak, nonatomic) id<CAKAlbumNavigationViewDelegate> delegate;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAKAlbumSelectAlbumButton *selectAlbumButton;
@property (retain, nonatomic) UIButton *enableMultiSelectButton;
@property (retain, nonatomic) UIButton *selectAllAssetsBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (id)initWithThemeType:(long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
