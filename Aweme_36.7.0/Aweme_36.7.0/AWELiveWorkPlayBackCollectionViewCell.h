@class UIStackView, UIView, NSString, UIImageView, AWELiveWorkHighlightView, CAGradientLayer, LOTAnimationView, AWELiveWorkRightEntranceView, UILabel, AWELiveWorkCollectionViewCellModel;

@interface AWELiveWorkPlayBackCollectionViewCell : UICollectionViewCell <AWELiveWorkCollectionViewCellProtocol>

@property (retain, nonatomic) UIView *iconContainer;
@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) UIStackView *playBackTag;
@property (retain, nonatomic) UILabel *liveTagText;
@property (retain, nonatomic) LOTAnimationView *liveTagMusicView;
@property (retain, nonatomic) AWELiveWorkRightEntranceView *rightEntranceView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWELiveWorkHighlightView *footerView;
@property (retain, nonatomic) AWELiveWorkCollectionViewCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;
+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
