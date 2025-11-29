@class NSString, UIImageView, UILabel, CAKAlbumSelectAlbumButton, UIButton;
@protocol CAKAlbumNavigationViewDelegate;

@interface ACCAIGCAlbumNavigationView : UIView <CAKAlbumNavigationViewProtocol>

@property (nonatomic) long long themeType;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ rightImageViewDidClickedBlock;
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

- (id)initWithThemeType:(long long)a0;
- (void)rightImageViewDidClicked:(id)a0;
- (void)updateViewsWithType:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
