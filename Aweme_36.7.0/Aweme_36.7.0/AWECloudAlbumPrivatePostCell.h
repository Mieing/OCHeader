@class UIView, ACCAnimatedButton, NSString, UIImageView, AWECloudAlbumPrivatePostModel, NSObject, UILabel, NSShadow;
@protocol ACCNewActionSheetProtocol;

@interface AWECloudAlbumPrivatePostCell : UICollectionViewCell <AWECloudAlbumPrivatePostCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *coverPlaceholderImageView;
@property (retain, nonatomic) UIView *titleBGView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *flagImageView;
@property (retain, nonatomic) ACCAnimatedButton *moreButton;
@property (retain, nonatomic) NSObject<ACCNewActionSheetProtocol> *moreActionSheet;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) UIView *accessibilityView;
@property (retain, nonatomic) UIImageView *uploadingFlagImageView;
@property (retain, nonatomic) AWECloudAlbumPrivatePostModel *postModel;
@property (copy, nonatomic) id /* block */ removeLocalAlbumAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)moreButtonAction:(id)a0;
- (void)configHiddenAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
