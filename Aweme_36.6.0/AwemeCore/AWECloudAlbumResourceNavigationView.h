@class NSString, UILabel, CAKAlbumSelectAlbumButton, UIButton;
@protocol CAKAlbumNavigationViewDelegate;

@interface AWECloudAlbumResourceNavigationView : UIView <CAKAlbumNavigationViewProtocol>

@property (nonatomic) long long themeType;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAKAlbumSelectAlbumButton *selectAlbumButton;
@property (nonatomic) long long maxUploadCount;
@property (weak, nonatomic) id<CAKAlbumNavigationViewDelegate> delegate;
@property (retain, nonatomic) UIButton *enableMultiSelectButton;
@property (retain, nonatomic) UIButton *selectAllAssetsBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSwitch;
- (id)initWithThemeType:(long long)a0;
- (void)hideSelectAllAssetsBtnIfNeedWith:(id)a0 hide:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
