@class UIImageView, UILabel, UIView;
@protocol CAKAlbumAssetLivePhotoSwitchButtonDelegate;

@interface CAKAlbumAssetLivePhotoSwitchButton : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *livePhotoIconView;
@property (retain, nonatomic) UILabel *livePhotoSwitchLabel;
@property (nonatomic) long long currentState;
@property (weak, nonatomic) id<CAKAlbumAssetLivePhotoSwitchButtonDelegate> delegate;

- (void)updateLivePhotoStatus:(long long)a0;
- (void)updateUIIsHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateCurrentLivePhotoStatus;
- (void)layoutWhenButtonHide;
- (void)layoutWhenButtonShow;
- (void).cxx_destruct;
- (void)setupUI;

@end
