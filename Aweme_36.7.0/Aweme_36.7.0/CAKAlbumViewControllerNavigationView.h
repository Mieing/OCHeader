@class NSString, UILabel, CAKAlbumSelectAlbumButton, UIButton;
@protocol CAKAlbumNavigationViewDelegate;

@interface CAKAlbumViewControllerNavigationView : UIView <CAKAlbumNavigationViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAKAlbumSelectAlbumButton *selectAlbumButton;
@property (nonatomic) long long themeType;
@property (weak, nonatomic) id<CAKAlbumNavigationViewDelegate> delegate;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *enableMultiSelectButton;
@property (retain, nonatomic) UIButton *selectAllAssetsBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithThemeType:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
