@class ACCAnimatedButton, UICollectionView, UILabel, UIView, BDImageView;

@interface ACCAIGCWaterfallLoraInfoHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *loraPhotoView;
@property (retain, nonatomic) UILabel *loraCreateTime;
@property (retain, nonatomic) UILabel *loraName;
@property (retain, nonatomic) ACCAnimatedButton *manageButton;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ profileModel;

+ (id)reuseIdentifier;

- (void)manageButtonPressed;
- (void)updateUILayout;
- (void)showOriginImage;
- (void)showCreateTime;
- (id)createDetailInfoVC;
- (void)detailInfoVCDismissWith:(BOOL)a0 hadDeleteModel:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
